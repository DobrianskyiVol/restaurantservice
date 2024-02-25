#include "Visitor.h"

using namespace std;

Visitor::Visitor() {
    name = "None";
    age = 0;
    std::cout<<"Default for visitor"<<endl;
}

Visitor::Visitor(std::string name) {
    this->name = name;
    age = 0;
    std::cout<<"Only name"<<endl;
}
Visitor::Visitor(int age) {
    this->age = age;
    name = " ";
    std::cout<<"Only age"<<endl;
}
Visitor::Visitor(std::string name, int age) {
    this->name = name;
    this->age = age;
    std::cout<<"And name and age"<<endl;
}