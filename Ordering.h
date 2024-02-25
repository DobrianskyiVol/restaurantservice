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
};


#endif //RESTAURANTSERVICE_ORDERING_H
