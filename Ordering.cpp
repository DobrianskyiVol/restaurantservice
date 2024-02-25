
#include "Ordering.h"

using namespace std;

void Ordering::get() {
    std:: cout <<" price: " <<price << endl
               << "nameofdish: "<<nameofdish<<endl<<"weight: "<<weight<<endl;
    std::cout << "--------------------------------------------------------------------"<<endl;
};

Ordering::Ordering() : Ordering(0, "Unknown", 0, false) {
    std::cout<<"Default constructor"<<endl;
}

// Constructor with only weight
Ordering::Ordering(int new_weight) : Ordering(new_weight, "Unknown", 0, false) {
    std::cout<<"only weight constructor"<<endl;
}

// Constructor with weight and dish
Ordering::Ordering(int new_weight, std::string new_dish) : Ordering(new_weight, new_dish, 0, false) {
    std::cout<<"without bool and price constructor"<<endl;
}

// Constructor with weight, dish, and price
Ordering::Ordering(int new_weight, std::string new_dish, int new_price) : Ordering(new_weight, new_dish, new_price, false) {
    std::cout<<"without bool constructor"<<endl;
}

// Full constructor
Ordering::Ordering(int new_weight, std::string new_dish, int new_price, bool new_isonthemenu)
        : weight{new_weight}, nameofdish{new_dish}, price(new_price), isonthemenu(new_isonthemenu) {
 //   countoforders++;
    std::cout<<"Full constructor"<<endl;
};

Ordering::~Ordering(){
    std::cout <<endl<< "destructor was called"<<endl;
};