//
// Created by 4s4r on 25.12.2023.
//
#include <iostream>
#ifndef TRANSPORT_VEHICLE_LIST_H
#define TRANSPORT_VEHICLE_LIST_H


class Vehicle_list {
private:
    size_t* data_; //pointer
    size_t size_;
public:
    // parameterless constructor
    Vehicle_list();

    // constructor
    Vehicle_list(size_t size);

    //destructor
    ~Vehicle_list();

    //methods
    void add(size_t id);

    void remove(size_t id);

    void demo() const;

//    size_t get(size_t index) const;
};


#endif //TRANSPORT_VEHICLE_LIST_H
