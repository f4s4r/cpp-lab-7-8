//
// Created by 4s4r on 24.12.2023.
//
#include "Vehicle.h"
#include "Motorbike.h"

// parameterless constructor realise
Motorbike::Motorbike() :
        Vehicle(), type_(TYPE_::UNKNOWN)
{}
// constructor realise
Motorbike::Motorbike(size_t id, std::string brand, std::string name, unsigned int power, bool status, unsigned int year,
                     unsigned int run, std::string cur_user, int price, int last_service, TYPE_ type) :
        Vehicle(id, std::move(brand), std::move(name), power, status, year, run, std::move(cur_user), price, last_service), type_(type)
{}
// destructor realise
Motorbike::~Motorbike()
{
    type_ = TYPE_::UNKNOWN;
}

// getters and setters
void Motorbike::set_type(TYPE_ type)
{
    type_ = type;
}

TYPE_ Motorbike::get_type() const
{
    return type_;
}

//methods
void Motorbike::demo() const
{
    std::cout << "------" << std::endl;
    std::cout << "Class - motorbike" << std::endl;
    std::cout << this->get_id() << " - vehicle id" << std::endl;
    std::cout << this->get_brand()  << " - brand"  <<  std::endl;
    std::cout << this->get_name()   <<  " - name"  << std::endl;
    std::cout << this->get_power()  <<  " - power" << std::endl;
    std::cout << (this->get_status() ? "True" : "False") <<  " - status" << std::endl;
    std::cout << this->get_year() <<  " - year"    << std::endl;
    std::cout << this->get_cur_user() << " - current user" << std::endl;
    std::cout << this->get_price() << " - rent price" << std::endl;
    std::cout << this->get_last_service() << " - last service" << std::endl;
    switch (this->get_type())
    {
        case 0:
            std::cout << "Cross type" << std::endl;
            break;
        case 1:
            std::cout << "Enduro type" << std::endl;
            break;
        case 2:
            std::cout << "Sport type" << std::endl;
            break;
        case 3:
            std::cout << "Unknown type" << std::endl;
            break;
    }
    std::cout << "------" << std::endl;
}