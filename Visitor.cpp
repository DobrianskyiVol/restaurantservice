#include "Visitor.h"

//using namespace std;
//
//void Visitor::get_information() const {
//    std::cout << "Name: "<<name << endl;
//    std::cout << "Age: "<<age << endl;
//}
//
//Visitor::Visitor() {
//    name = "None";
//    age = 0;
//    std::cout<<"Default for visitor"<<endl;
//}
//
//Visitor::Visitor(std::string name) {
//    this->name = name;
//    age = 0;
//    std::cout<<"Only name"<<endl;
//}
//Visitor::Visitor(int age) {
//    this->age = age;
//    name = " ";
//    std::cout<<"Only age"<<endl;
//}
//Visitor::Visitor(std::string name, int age) {
//    this->name = name;
//    this->age = age;
//    std::cout<<"And name and age"<<endl;
//}
//
//ostream &operator <<(std::ostream &os, Visitor &dude){
//    os<<"Name :"<<dude.name<<"\nAge: "<<dude.age<<endl;
//    return os;
//};
////stream insertion
//
//istream &operator >>(std::istream &input, Visitor &dude){
//    cout<<"Enter name: "<<endl;
//    input>>dude.name;
//    cout<<"Enter age: "<<endl;
//    input>>dude.age;
//    return input;
//};
////stream extraction
//


Visitor::Visitor(): Visitor("Unknown",0){
    std::cout<<"Base default constructor was called: "<<std::endl;
}

Visitor::Visitor(std::string &&name, int &&age):
    name{std::move(name)}, age{std::make_shared<int>(age)}{
    std::cout<<"Base Visitor constructor was called"<<std::endl;
}

Visitor::Visitor(Visitor &&visitor) noexcept:
    name(std::move(visitor.name)), age{visitor.age}{
    visitor.name = nullptr;
    visitor.age = nullptr;
}

void Visitor::getinf() const{
    std::cout << name<< std::endl;
    std::cout << *age << std::endl;
}

void Visitor::setinf() {
    std::cout << "Set name: ";
    std::cin >> name;

    std::cout<<std::endl;

    std::cout << "Set age: ";
    std::cin >> *age;

    std::cout<<std::endl;
}
Int_visitor::Int_visitor(): Int_visitor("Unknown", 0,0) {
    std::cout<<"Default base constructor was called; "<<std::endl;
}

Int_visitor::Int_visitor(std::string &&name, int &&age, int &&phone):
    Visitor(std::move(name), std::move(age)), phone(std::make_shared<int>(phone)){
    std::cout<<"Derive constructor was called"<<std::endl;
}

void Int_visitor::getinf() const{
    Visitor::getinf();
    std::cout << "Phone number: " << *phone << std::endl;
}

void Int_visitor::setinf() {
    Visitor::setinf();
    std::cout << "Enter phone: ";
    std::cin >> *phone;
    std::cout<<std::endl;
}