//
// Created by 4s4r on 13.12.2023.
//

#include "Vehicle.h"



Vehicle::Vehicle() // parameterless constructor realise
        :id_(), brand_(), name_(), power_(0), status_(false), year_(0), run_(0), cur_user_("None"), price_(0), last_service_(0), record_()
{}

Vehicle::Vehicle(size_t id, std::string brand, std::string name, unsigned int power, bool status, unsigned int year, unsigned int run, std::string cur_user, int price, int last_service)
        : id_(id), brand_(std::move(brand)), name_(std::move(name)), power_(power), status_(status), year_(year), run_(run), cur_user_(std::move(cur_user)), price_(price), last_service_(last_service),
          record_()
{}



Vehicle::~Vehicle() // destructor realise
{
    id_ = 0;
    brand_ = "";
    name_ = "";
    power_ = 0;
    status_ = false;
    year_ = 0;
    run_ = 0;
    cur_user_ = "";
}

// getters and setters
void Vehicle::set_id(unsigned int id)
{
    id_ = id;
}

size_t Vehicle::get_id() const
{
    return id_;
}


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
    return this->power_;
}

void Vehicle::set_year(unsigned int year)
{
    year_ = year;
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

void Vehicle::set_cur_user(std::string cur_user)
{
    cur_user_ = std::move(cur_user);
}

std::string Vehicle::get_cur_user() const
{
    return cur_user_;
}

void Vehicle::set_price(int price)
{
    price_ = price;
}

int Vehicle::get_price() const
{
    return price_;
}

void Vehicle::set_last_service(int last_service)
{
    last_service_ = last_service;
}

int Vehicle::get_last_service() const
{
    return last_service_;
}

//void Vehicle::set_id(size_t id)
//{
//    id_ = id;
//}
//
//size_t Vehicle::get_id() const
//{
//    return id_;
//}

void Vehicle::set_services()
{
    this->record_.set_services();
}

//std::string* Vehicle::get_services() const
//{
//    return this->record_.get_services();
//}

void Vehicle::set_num_serv(int num)
{
    this->record_.set_num_serv(num);
}

int Vehicle::get_num_serv() const
{
    return this->record_.get_num_serv();
}

void Vehicle::set_comment(std::string comment)
{
    this->record_.set_comment(comment);
}

std::string Vehicle::get_comment() const
{
    return this->record_.get_comment();
}

// methods
void Vehicle::demo() const
{
    std::cout << "------" << std::endl;
    std::cout << "Class - vehicle" << std::endl;
    std::cout << this->get_id() << " - vehicle id" << std::endl;
    std::cout << this->get_brand()  << " - brand"  <<  std::endl;
    std::cout << this->get_name()   <<  " - name"  << std::endl;
    std::cout << this->get_power()  <<  " - power" << std::endl;
    std::cout << (this->get_status() ? "True" : "False") <<  " - status" << std::endl;
    std::cout << this->get_year() <<  " - year"    << std::endl;
    std::cout << this->get_cur_user() << " - current user" << std::endl;
    std::cout << this->get_price() << " - rent price" << std::endl;
    std::cout << this->get_last_service() << " - last service" << std::endl;
    this->record_.demo();
    std::cout << "------" << std::endl;
}