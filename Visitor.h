

#ifndef RESTAURANTSERVICE_VISITOR_H
#define RESTAURANTSERVICE_VISITOR_H

#include <string>
#include <iostream>
#include <fstream>
#include <memory>


//class Visitor {
//private:
//
//    std:: string name;
//    int age;
//
//public:
//    void get_information() const;
//
//    Visitor();
//
//    Visitor(std::string name);
//
//    Visitor(int age);
//
//    Visitor(std::string name, int age);
//
//    friend std::ostream &operator <<(std::ostream &output, Visitor &dude);
////stream insertion
//
//    friend std::istream &operator >>(std::istream &input, Visitor &dude);
////stream extraction
//};


class Visitor{
private:
    std::string name;
    std::shared_ptr <int> age;
public:

    Visitor();

    Visitor(std::string &&name, int &&age);

    Visitor(Visitor &&visitor) noexcept;

    /*virtual*/ void getinf() const;

   virtual void setinf();

   virtual ~Visitor();
};


class Int_visitor:public Visitor{
private:
    std::shared_ptr <int> phone;
public:

    Int_visitor();

    Int_visitor(std::string &&name, int &&age, int &&phone);

    virtual ~Int_visitor();

    void getinf() const /*override*/;

    void setinf() override;

};


#endif //RESTAURANTSERVICE_VISITOR_H
