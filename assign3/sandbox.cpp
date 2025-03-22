/*
 * CS106L Assignment 3: Make a Class
 * Created by Fabio Ibanez with modifications by Jacob Roberts-Baca.
 */
#include <iostream>
#include <string>
#include "class.h"
void sandbox() {YachayStudent student("Roberto", "Math", 123456789);
    std::cout << "Name: " << student.getName() << std::endl;
    std::cout << "Matter: " << student.getMatter() << std::endl;
    std::cout << "Phone Number: " << student.getnumber() << std::endl;
}