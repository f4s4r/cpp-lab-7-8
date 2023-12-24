//
// Created by 4s4r on 13.12.2023.
//

#include "Car.h"
//parameterless constructor realize
Car::Car() :
    Vehicle(), num_of_doors_(1), num_of_seats_(1), price_(0), last_service_(0)
{}

// constructor realize
Car::Car(std::string brand, std::string name, unsigned int power, bool status, unsigned int year, unsigned int run, std::string cur_user, int num_of_doors, int num_of_seats, int price, int last_service) :
    Vehicle(std::move(brand), std::move(name), power, status, year, run, std::move(cur_user)), num_of_doors_(num_of_doors), num_of_seats_(num_of_seats), price_(price), last_service_(last_service)
{}

// destructor realise
Car::~Car()
{
    num_of_doors_ = 0;
    num_of_seats_ = 0;
    price_ = 0;
    last_service_ = 0;
}

// Getters and setters

void Car::set_num_of_doors(int num_of_doors)
{
    num_of_doors_ = num_of_doors;
}

int Car::get_num_of_doors() const
{
    return num_of_doors_;
}

void Car::set_num_of_seats(int num_of_seats)
{
    num_of_seats_ = num_of_seats;
}

int Car::get_num_of_seats() const
{
    return num_of_seats_;
}

void Car::set_price(int price)
{
    price_ = price;
}

int Car::get_price() const
{
    return price_;
}

void Car::set_last_service(int last_service)
{
    last_service_ = last_service;
}

int Car::get_last_service() const
{
    return last_service_;
}


void Car::demo() const
{
    std::cout << this->get_brand()  << " - brand"  <<  std::endl;
    std::cout << this->get_name()   <<  " - name"  << std::endl;
    std::cout << this->get_power()  <<  " - power" << std::endl;
    std::cout << (this->get_status() ? "True" : "False") <<  " - status" << std::endl;
    std::cout << this->get_year() <<  " - year"    << std::endl;
    std::cout << this->get_cur_user() << " - current user" << std::endl;
    std::cout << this->get_num_of_doors() << " - num of doors" << std::endl;
    std::cout << this->get_num_of_seats() << " - num of seats" << std::endl;
    std::cout << this->get_price() << " - rent price" << std::endl;
    std::cout << this->get_last_service() << " - last service" << std::endl;
}