cmake_minimum_required(VERSION 3.26)
project(restaurantservice)

set(CMAKE_CXX_STANDARD 17)

add_executable(restaurantservice main.cpp
        Ordering.cpp
        Ordering.h
        Visitor.cpp
        Visitor.h
        Restaurantstaff.cpp
        Restaurantstaff.h)
