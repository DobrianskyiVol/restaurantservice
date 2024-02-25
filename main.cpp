#include <iostream>
#include "Ordering.h"
#include "Restaurantstaff.h"
#include "Visitor.h"
#include <vector>

using namespace std;

int main() {
    vector <Restaurantstaff> employees;
    employees.push_back(Restaurantstaff{"Volodymyr","Waitor"});

    employees.push_back(Restaurantstaff{"Vlad","Barmen"});

    employees.push_back(Restaurantstaff{"Eduard","Shef"});

    employees.push_back(Restaurantstaff{"Eduard","Shef"});

    std::cout<<"-------------------------------------------------------------"<<std::endl;

    const Visitor visitor("Volodymyr");

    visitor.get_information();

    std::cout<<"-------------------------------------------------------------"<<std::endl;

    Ordering ordering1(125,"steak",225);

    Ordering ordering2(125,"cake",225);

    Ordering ordering3(125,"steak");

    std::cout<< "How many dishes should be cooked "<<ordering1.countoforders << std::endl;

    std::cout<<"-------------------------------------------------------------"<<std::endl;

    Ordering ordering4 = ordering1 + ordering2;

    ordering4.get();





    return 0;
}
