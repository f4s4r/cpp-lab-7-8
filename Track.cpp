//
// Created by 4s4r on 24.12.2023.
//

#include "Track.h"
Track::Track() :
        Vehicle(), max_to_lift_(0)
{}

// constructor realize
Track::Track(size_t id, std::string brand, std::string name, unsigned int power, bool status, unsigned int year, unsigned int run, std::string cur_user, int price, int last_service, int max_to_lift) :
        Vehicle(id, std::move(brand), std::move(name), power, status, year, run, std::move(cur_user), price, last_service), max_to_lift_(max_to_lift)
{}

// destructor realise
Track::~Track()
{
    max_to_lift_ = 0;
}

void Track::set_max_to_lift(int max_to_lift)
{
    max_to_lift_ = max_to_lift;
}

int Track::get_max_to_lift() const
{
    return max_to_lift_;
}

//methods
void Track::demo() const
{
    std::cout << "------" << std::endl;
    std::cout << "Class - truck" << std::endl;
    std::cout << this->get_id() << " - vehicle id" << std::endl;
    std::cout << this->get_brand()  << " - brand"  <<  std::endl;
    std::cout << this->get_name()   <<  " - name"  << std::endl;
    std::cout << this->get_power()  <<  " - power" << std::endl;
    std::cout << (this->get_status() ? "True" : "False") <<  " - status" << std::endl;
    std::cout << this->get_year() <<  " - year"    << std::endl;
    std::cout << this->get_cur_user() << " - current user" << std::endl;
    std::cout << this->get_price() << " - rent price" << std::endl;
    std::cout << this->get_last_service() << " - last service" << std::endl;
    std::cout << this->get_max_to_lift() << " - maximum weight to lift" << std::endl;
    this->record_.demo(this->get_id());
    std::cout << "------" << std::endl;
}