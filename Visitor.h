

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
    void get_information() const;

    Visitor();

    Visitor(std::string name);

    Visitor(int age);

    Visitor(std::string name, int age);

    friend std::ostream &operator <<(std::ostream &output, Visitor &dude);
//stream insertion
    friend std::istream &operator >>(std::istream &input, Visitor &dude);
//stream extraction
};


#endif //RESTAURANTSERVICE_VISITOR_H
