#include <iostream>
#include <map>
#include <string>
#include <set>


void displayInventory(const std::map<std::string, int>& inventory) {
    std::cout << "Current Inventory:\n";
    for (const auto& item : inventory) {
        std::cout << item.first << ": " << item.second << " in stock\n";
    }
    std::cout << std::endl;
}

void addnewproduct(std::map<std::string, int>& inventory) { 
    std::string newproduct;
    int quantity;
    std::cout << "Enter the product name: ";
    std::cin >> newproduct;
    std::cout << "Enter the quantity: ";
    std::cin >> quantity;

    inventory.insert({newproduct, quantity});
}

void addnewcategory(std::set<std::string>& productCategories) { 
    std::string newcategory;
    std::cout << "Enter the new category name: ";
    std::cin >> newcategory;
    productCategories.insert(newcategory);

    std::cout << "Category added: " << newcategory << std::endl;
}

int main() {
    std::map<std::string, int> inventory;

    //Adding products
    inventory["Laptop"] = 5;
    inventory["Mouse"] = 20;
    inventory["Keyboard"] = 10;

    
    addnewproduct(inventory); 
     

    //change the values of some product
    inventory["Mouse"] = 30; 


    displayInventory(inventory);

   
    std::cout << "All available products: \n";
    for (const auto& item : inventory) {
        std::cout << item.first << " -- ";
    }
    std::cout << std::endl;



//TASK02
    std::set<std::string> productCategories;

    // Adding categories
    productCategories.insert("Electronics");
    productCategories.insert("Accessories");
    productCategories.insert("Peripherals");


    addnewcategory(productCategories);

    std::cout << "Product Categories:\n";
    for (const auto& category : productCategories) {
        std::cout << "- " << category << "\n";
    }

    return 0;
}