//
// Created by user on 25.02.2024.
//

#include "Restaurantstaff.h"

void Restaurantstaff::getname() {
    std::cout<<"Name of employee: "<<name<<std::endl;
}

Restaurantstaff::Restaurantstaff(std::string new_name, std::string new_position) {
    name = new std::string;
    positon = new std::string;
    *name = new_name;
    *positon = new_position;
}

Restaurantstaff::Restaurantstaff( const Restaurantstaff& employee)
{
    name = new std::string;
    name = employee.name;
    positon = new std::string;
    positon = employee.positon;
    std::cout<<"Copy constructor was called for: "<<*name<<std::endl;
}


