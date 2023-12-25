//
// Created by 4s4r on 25.12.2023.
//

#ifndef TRANSPORT_CUSTOMER_H
#define TRANSPORT_CUSTOMER_H


#include <iostream>

class Customer {
private:
    std::string name_;
    bool is_using_;
    size_t id_using_;
public:
    // parameterless constructor
    Customer();
    // constructor
    Customer(std::string name, bool is_using, size_t id_using);
    // destructor
    ~Customer();


    // getters and setters
    void set_name(std::string name);

    std::string get_name() const;

    void set_is_using(bool is_using);

    bool get_is_using() const;

    void set_id_using(size_t is_using);

    size_t get_id_using() const;

    //methods
    void info() const;
};


#endif //TRANSPORT_CUSTOMER_H
