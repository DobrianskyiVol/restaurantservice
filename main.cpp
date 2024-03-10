#include <iostream>
#include "Ordering.h"
#include "Staff.h"
#include "Visitor.h"
#include <vector>
#include <memory>


using namespace std;

int main() {

//    shared_ptr <Staff> Nastya = make_shared<Waitor>("Nastya",2600,90);
//
//    Nastya->getinf();
//
//    shared_ptr<Staff> Nadya = Nastya;
//
//    cout<<Nastya.use_count()<<endl;


//Visitor *visitor = new Visitor("name", 36);
//
//Visitor *visitor1 = new Int_visitor("Vova",18,0);

//unique_ptr<Visitor> visitor = make_unique<Visitor>("Vova", 18);
//
//unique_ptr<Visitor> visitor1 = make_unique<Int_visitor>("Nastya",17,20);
//
//visitor->getinf();
//
//visitor1->getinf();
//
//shared_ptr<Visitor> visitor2 = make_shared<Visitor>();
//
//shared_ptr<Visitor> visitor3 = make_shared<Int_visitor>();
//
//visitor2->setinf();
//
//visitor3->setinf();

Ordering *ordering = new Ordering();

Ordering *ordering1 = new Drink();

Ordering *ordering2 = new Food();

    ordering->setorder();

    ordering1->setorder();

    ordering2->setorder();


ordering->getorder();

ordering1->getorder();

ordering2->getorder();




    return 0;
}
