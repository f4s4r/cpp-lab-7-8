//
// Created by 4s4r on 25.12.2023.
//
#include "Vehicle_list.h"
#ifndef TRANSPORT_CUSTOMER_H
#define TRANSPORT_CUSTOMER_H


#include <iostream>

class Customer {
private:
    std::string name_;
//    bool is_using_;
    Vehicle_list list_;
public:
    // parameterless constructor
    Customer();
    // constructor
    Customer(std::string name);
    // destructor
    ~Customer();


    // getters and setters
    void set_name(std::string name);

    std::string get_name() const;

//    void set_is_using(bool is_using);
//
//    bool get_is_using() const;

    void set_id_using(size_t is_using);

    size_t get_id_using() const;

    //methods
    void add(size_t id);

    void remove(size_t index);

    void info() const;

    //operator
//    Customer operator+(const size_t& id);
};


#endif //TRANSPORT_CUSTOMER_H
