#include <iostream>
class structuredbinding{
    public:
    std:: string str;
    float num3;
    structuredbinding(std::string s, float v) : str(s), num3(v) {}
    void newstr(const std::string& newStr) {
        str = newStr;
  
    }

    void newnum3(float newNum3) {
        num3 = newNum3;
    
    }
};

struct Point{
   int x;
   int y;
   int z;
};


int main() {
 int num1 = 10;
 double num2 {12.0};
 structuredbinding dates("Hello",3.14f);

 float num3= 3.14;
 std::cout << "Initial values: " << std::endl;
 std::cout << "int: " << num1 << " ,";
 std::cout << "double: " << num2 << " ,";
 std::cout << ", string: " << dates.str << ", float: " << dates.num3 << std::endl;


 //Modificate values

 num1=20;
 num2=2.72;
 dates.newstr("WORLD");
 dates.newnum3(2.71);
 std::cout << std::endl;

 std::cout << "Modificated values: " << std::endl;
 std::cout << "int: " << num1 << " ,";
 std::cout << "double: " << num2 << " ,";
 std::cout << ", string: " << dates.str << ", float: " << dates.num3 << std::endl;

 //Structured Binding
Point p1={3,4,5};
auto[x,y,z]=p1;

std::cout<<"Structured Binding:"<< std::endl;
std::cout << "x: " << x << ",";
std::cout << "y: " << y << ",";
std::cout << "z: " << z << std::endl;

/*
1.	a = 42; // l-value
2.	int x = a + b; \\ int x = a + b; // a and b are l-values, (a + b) is an r-value
3.	&a;\\ l-value 
4.	std::string s = c + " World";  // c is an l-value, "World" is an r-value, (c + " World") is an r-value
5.	int& refX = x; // l-value reference
6.	int&& rref = 100; // r-value reference
*/

 return 0;
}