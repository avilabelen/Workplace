#include <iostream>
#include <map>
#include <string>
void displayInventory(const std::map<std::string, int>& inventory) {
    std::cout << "Current Inventory:\n";
    for (const auto& item : inventory) {
        std::cout << item.first << ": " << item.second << " in stock\n";
    }
    std::cout << std::endl;
}
void addnewproduct(map<string,int>&inventory)

int main() {
    std::map<std::string, int> inventory;

    // Adding products
    inventory["Laptop"] = 5;
    inventory["Mouse"] = 20;
    inventory["Keyboard"] = 10;


    inventory.insert({"CPU",8});//Add a new product
    inventory["Mouse"]=30; // Update the quantity of an existing product.

    displayInventory(inventory);
    std::cout << "All available products : \n";
    for (const auto& item : inventory) {
        std::cout << item.first << "--";
    }


    return 0;
}


//TASK02