#ifndef CLASS_H
#define CLASS_H

#include <string.h>
#include <iostream>
class YachayStudent {
private:
 std:: string name;
 std:: string matter;
 int cellphonenumber;

public:
YachayStudent(std::string name, std:: string matter, int cellphonenumber);

 std::string getName();
 std::string getMatter();
 int getnumber();

};
#endif 