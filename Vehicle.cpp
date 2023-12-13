//
// Created by 4s4r on 13.12.2023.
//

#include "Vehicle.h"



Vehicle::Vehicle() // parameterless constructor realise
        :brand_(), name_(), power_(0), status_(false), year_(0), run_(0)
{}

Vehicle::Vehicle(std::string brand, std::string name, unsigned int power, bool status, unsigned int year, unsigned int run)
        : brand_(std::move(brand)), name_(std::move(name)), power_(power), status_(status), year_(year), run_(run)
{}



Vehicle::~Vehicle() // destructor realise
{
    brand_ = "";
    name_ = "";
    power_ = 0;
    status_ = false;
    year_ = 0;
    run_ = 0;
}

// getters and setters
void Vehicle::set_brand(std::string brand)
{
    brand_ = std::move(brand);
}

std::string Vehicle::get_brand() const
{
    return brand_;
}

void Vehicle::set_name(std::string name)
{
    name_ = std::move(name);
}

std::string Vehicle::get_name() const
{
    return name_;
}

void Vehicle::set_power(unsigned int power)
{
    power_ = power;
}

unsigned int Vehicle::get_power() const
{
    return power_;
}

void Vehicle::set_year(unsigned int year)
{
    power_ = year;
}

unsigned int Vehicle::get_year() const
{
    return year_;
}

void Vehicle::set_status(bool status)
{
    status_ = status;
}

bool Vehicle::get_status() const
{
    return status_;
}