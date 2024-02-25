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

Restaurantstaff::Restaurantstaff( Restaurantstaff&& employee) noexcept
        :name{employee.name},positon{employee.positon}{
    employee.name = nullptr;
    employee.positon = nullptr;
    std::cout<<"move constructor was called for: "<< *name <<std::endl<<std::endl;
}
// move constructor

Restaurantstaff::~Restaurantstaff(){
//    std::cout<<"Destructor was called for: "<<name<<std::endl<<std::endl;
    if (name!= nullptr){
        std::cout<<"Destructor was called for: "<<*name<<std::endl;
        delete name;
        delete positon;
    } else{
        std::cout<<"Destructor was called for nullptr "<<std::endl;
    }
};

Restaurantstaff::Restaurantstaff() {
    *name = "Unknown";
    *positon = "Unknown";
}
//default constructor


