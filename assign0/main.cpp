#include <iostream>
#include <tuple>
struct Point{
  int x;
  std::string y;
  float z;
};
int main() {
 int num = 10;  //direct initialization
 double num2{3.66}; //uniform initialization
 std::string Str{"HELLO"};//uniform initialization 
 bool FALSE= true;
 float num3{12.0};
 std::cout << "int : " << num << ",  ";
 std::cout <<"double : "<< num2 << ",  ";
 std::cout <<"String : " << Str << ",  ";
 std::cout <<"BOOL : " << FALSE << ",  ";
 std::cout <<"Float : "<< num3 << ",  ";
 std::cout <<"Modificated values"<< std::endl;
 int& refer = num;
 refer = 20;
 double& ref = num2;
 ref = 4.66;
 std::string& refstring = Str;
 refstring = "World ";
 bool& refbool= FALSE;
 refbool= false;
 float& reffloat= num3;
 reffloat=1.5;
 std::cout << "int : " << refer << ",  ";
 std::cout << "double : "<< ref << ",  ";
 std::cout << "string : "<< refstring << ",  ";
 std::cout << "BOOL : "<< refbool << ",  ";
 std::cout << "Float : "<< reffloat << ",  ";
 return 0;
}