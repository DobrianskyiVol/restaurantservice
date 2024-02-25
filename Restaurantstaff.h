//
// Created by user on 25.02.2024.
//

#ifndef RESTAURANTSERVICE_RESTAURANTSTAFF_H
#define RESTAURANTSERVICE_RESTAURANTSTAFF_H

#include <iostream>

class Restaurantstaff {
private:
    std::string *name;
    std:: string *positon;
public:
    void getname();

    Restaurantstaff(std::string new_name, std::string new_position);

    Restaurantstaff(const Restaurantstaff& employee);
    //copy constructor

    Restaurantstaff( Restaurantstaff&& employee) noexcept;
// move constructor

    ~Restaurantstaff();
    //destructor
};


#endif //RESTAURANTSERVICE_RESTAURANTSTAFF_H
