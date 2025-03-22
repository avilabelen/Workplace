#include <iostream>
#include <string>
#include "class.h"



YachayStudent:: YachayStudent(std::string name, std:: string matter, int cellphonenumber){
 this->name=name;
 this->matter=matter;
 this->cellphonenumber=cellphonenumber; }

 std::string YachayStudent::getName() {
    return name;
}
std::string YachayStudent::getMatter() {
    return matter;
}

int YachayStudent::getnumber() {
    return cellphonenumber;
}


