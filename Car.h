//
// Created by 4s4r on 13.12.2023.
//
#include "Vehicle.h"
#ifndef TRANSPORT_CAR_H
#define TRANSPORT_CAR_H


class Car : public Vehicle{
protected:
    int num_of_doors_;
    int num_of_seats_;
    const std::string category_ = "B";

public:
    // parameterless constructor realise
    Car();
    // constructor realise
    Car(size_t id, std::string brand, std::string name, unsigned int power, bool status, unsigned int year, unsigned int run, std::string cur_user, int price, int last_service, int num_of_doors, int num_of_seats);
    // destructor realise
    ~Car();

    // Getters and setters
    void set_num_of_doors(int num_of_doors);

    int get_num_of_doors() const;

    void set_num_of_seats(int num_of_seats);

    int get_num_of_seats() const;

    void demo() const override;
};


#endif //TRANSPORT_CAR_H
