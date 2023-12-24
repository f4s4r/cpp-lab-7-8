//
// Created by 4s4r on 13.12.2023.
//

#ifndef TRANSPORT_VEHICLE_H
#define TRANSPORT_VEHICLE_H
#include <iostream>

class Vehicle
{
protected:
    //fields
    std::string brand_;
    std::string name_;
    unsigned int power_;
    bool status_;
    unsigned int year_;
    unsigned int run_;
    std::string cur_user_;

public:
    // parameterless constructor realise
    Vehicle();

    // constructor with parameters realise
    Vehicle(std::string brand, std::string name, unsigned int power, bool status, unsigned int year, unsigned int run, std::string cur_user);


    // destructor
    ~Vehicle();

    // getters and setters
    void set_brand(std::string brand);

    std::string get_brand() const;

    void set_name(std::string name);

    std::string get_name() const;

    void set_power(unsigned int power);

    unsigned int get_power() const;

    void set_year(unsigned int year);

    unsigned int get_year() const;

    void set_status(bool status);

    bool get_status() const;

    void set_cur_user(std::string cur_user);

    std::string get_cur_user() const;
    // methods
    virtual void demo() const;
};


#endif //TRANSPORT_VEHICLE_H
