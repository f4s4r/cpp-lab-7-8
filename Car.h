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
    int price_;
    int last_service_;
public:
    // parameterless constructor realise
    Car();
    // constructor realise
    Car(std::string brand, std::string name, unsigned int power, bool status, unsigned int year, unsigned int run, std::string cur_user, int num_of_doors, int num_of_seats, int price, int last_service);
    // destructor realise
    ~Car();

    // Getters and setters
    void set_num_of_doors(int num_of_doors);

    int get_num_of_doors() const;

    void set_num_of_seats(int num_of_seats);

    int get_num_of_seats() const;

    void set_price(int price);

    int get_price() const;

    void set_last_service(int last_service);

    int get_last_service() const;

    void demo() const override;
};


#endif //TRANSPORT_CAR_H
