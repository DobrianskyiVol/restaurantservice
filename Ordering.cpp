
#include "Ordering.h"

using namespace std;

void Ordering::getorder() const {
    std::cout << name <<std::endl
    << *price << std:: endl;
}

void Ordering::setorder() {
    std::cout << "Set name: ";
    std::cin >> name;
    std::cout<<endl;
    std::cout << "Set price: ";
    std::cin >> *price;
    std::cout<<endl;
}


Ordering::Ordering(): Ordering("No dish ", 0) {
    std::cout<<"Default ordering constructor was called; "<<std::endl;
}

Ordering::Ordering(std::string name, int &&price):
    name(std::move(name)), price(make_shared<int>(price)){
    std::cout << "Ordering full constructor was called; "<<std::endl;
}


Ordering::~Ordering() noexcept {
    std::cout << "Ordering destructor was called: "<< endl;
}

Drink::Drink(): Drink("No such drink",0, false){
    std::cout<<"Default drink constructor was called; "<< std::endl;
}

Drink::Drink(std::string name, int &&price, bool ishaseghteen):
    Ordering(std::move(name), std::move(price)), ishaseighteen(ishaseghteen){
    std::cout << "Derived  Drink  constructor was called: "<<std::endl;
}

void Drink::getorder() const {
    Ordering::getorder();
    if (ishaseighteen){
        std::cout << "can buy;"<<std::endl;
    } else
        std::cout << "Can't buy that drink; "<< std::endl;
}

void Drink::setorder() {
    Ordering::setorder();
    shared_ptr<int> age = make_shared<int>();

    std::cout << "Enter age: "<<std::endl;
    std::cin >> *age;
    if (*age >= 18)
        ishaseighteen = true;
    else
        ishaseighteen = false;
    age.reset();
}

Food::Food(): Food("No dish ", 0, 0) {}

Food::Food(std::string name, int &&price, int &&weight):
    Ordering(std::move(name), std::move(price)), weight(std::make_shared<int>(weight)){

    std::cout << "Derived  Food  constructor was called: "<<std::endl;
}

void Food::setorder() {
    Ordering::setorder();
    std::cout << "Enter weight: " << std::endl;
    std::cin >> *weight;
}

void Food::getorder() const {
    Ordering::getorder();
    std::cout << "Weight: " << *weight << std::endl;
}
//void Ordering::get() {
//    std:: cout <<" price: " <<price << endl
//               << "nameofdish: "<<nameofdish<<endl<<"weight: "<<weight<<endl;
//    std::cout << "--------------------------------------------------------------------"<<endl;
//};
//
//Ordering::Ordering() : Ordering(0, "Unknown", 0, false) {
//    std::cout<<"Default constructor"<<endl;
//}
//
//// Constructor with only weight
//Ordering::Ordering(int new_weight) : Ordering(new_weight, "Unknown", 0, false) {
//    std::cout<<"only weight constructor"<<endl;
//}
//
//// Constructor with weight and dish
//Ordering::Ordering(int new_weight, std::string new_dish) : Ordering(new_weight, new_dish, 0, false) {
//    std::cout<<"without bool and price constructor"<<endl;
//}
//
//// Constructor with weight, dish, and price
//Ordering::Ordering(int new_weight, std::string new_dish, int new_price) : Ordering(new_weight, new_dish, new_price, false) {
//    std::cout<<"without bool constructor"<<endl;
//}
//
//// Full constructor
//Ordering::Ordering(int new_weight, std::string new_dish, int new_price, bool new_isonthemenu)
//        : weight{new_weight}, nameofdish{new_dish}, price(new_price), isonthemenu(new_isonthemenu) {
//    countoforders++;
//    std::cout<<"Full constructor"<<endl;
//};
//
//int Ordering::countoforders = 0;
////static int
//
//Ordering Ordering::operator+(Ordering dish){
//    int weightfortwodishes = weight + dish.weight;
//    std::string twonamesdish = nameofdish + ", " + dish.nameofdish;
//    int pricefortwo = price + dish.price;
//    bool is = true;
//    return Ordering(weightfortwodishes,twonamesdish,pricefortwo,is);
//}



//Ordering::~Ordering(){
//    std::cout <<endl<< "destructor was called"<<endl;
//};

