

#ifndef RESTAURANTSERVICE_VISITOR_H
#define RESTAURANTSERVICE_VISITOR_H

#include <string>
#include <iostream>
#include <fstream>


class Visitor {
private:

    std:: string name;
    int age;

public:
    Visitor();

    Visitor(std::string name);

    Visitor(int age);

    Visitor(std::string name, int age);
};


#endif //RESTAURANTSERVICE_VISITOR_H
