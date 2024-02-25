//
// Created by user on 25.02.2024.
//

#ifndef RESTAURANTSERVICE_ORDERING_H
#define RESTAURANTSERVICE_ORDERING_H

#include <iostream>
#include <vector>

class Ordering {
private:
    int weight;
    std::string nameofdish;
    int price;
    bool isonthemenu;
public:
    void get();

    static int countoforders;

    Ordering(int new_weight, std:: string new_dish, int new_price, bool new_isonthemenu);

    Ordering(int new_weight, std:: string new_dish, int new_price);

    Ordering(int new_weight, std:: string new_dish);

    Ordering(int new_weight);

    Ordering();

    ~Ordering();
};


#endif //RESTAURANTSERVICE_ORDERING_H
