//
// Created by user on 25.02.2024.
//

#ifndef RESTAURANTSERVICE_STAFF_H
#define RESTAURANTSERVICE_STAFF_H

#include <iostream>

class Staff{
private:
    std::string name;

    int *hasearnedmoney;
public:
    Staff();

    Staff(std::string name, int *hasearnedmoney);

    Staff(Staff &employee);
//Copy constructor

    Staff(Staff &&employee) noexcept;
//Move constructor

    Staff &operator=(const Staff &employee);
//Reload operator =

    ~Staff();
//Destructor

    virtual void getinf() const = 0;
//Get information method

};

class Waitor:public Staff{
private:
    int tips;
public:

    void getinf() const  override;

    Waitor();

    Waitor(std::string name, int hasearnedmoney, int tips);


    Waitor(Waitor &waitor);

    Waitor(Waitor &&waitor) noexcept;

    ~Waitor();


    Waitor &operator=(const Waitor &employee);



};

#endif //RESTAURANTSERVICE_STAFF_H
