//
// Created by user on 25.02.2024.
//

#ifndef RESTAURANTSERVICE_ORDERING_H
#define RESTAURANTSERVICE_ORDERING_H

#include <iostream>
#include <vector>
#include <memory>


class Interface{
public:
    virtual void getorder() const = 0;

    virtual void setorder() = 0;

    virtual ~Interface() = default;
};


class Ordering:public Interface{
private:
    std::string name;

    std::shared_ptr<int> price;
public:
    Ordering();

    Ordering(std::string name, int &&price);

    ~Ordering();

    void getorder() const override;

    void setorder() override;


};

class Drink:public Ordering{
    bool ishaseighteen;
public:
    Drink();

    Drink(std::string name, int &&price, bool ishaseghteen);

    void getorder() const override;

    void setorder() override;
};

class Food:public Ordering{
    std::shared_ptr<int> weight;
public:
    Food();

    Food(std::string name, int &&price, int &&weight);

    void getorder() const override;

    void setorder() override;
};

//class Ordering {
//private:
//    int weight;
//    std::string nameofdish;
//    int price;
//    bool isonthemenu;
//public:
//    void get();
//
//    static int countoforders;
//
//    Ordering(int new_weight, std:: string new_dish, int new_price, bool new_isonthemenu);
//
//    Ordering(int new_weight, std:: string new_dish, int new_price);
//
//    Ordering(int new_weight, std:: string new_dish);
//
//    Ordering(int new_weight);
//
//    Ordering();
//
//    Ordering operator +(Ordering dish);
//
//    ~Ordering();
//};
//



#endif //RESTAURANTSERVICE_ORDERING_H
