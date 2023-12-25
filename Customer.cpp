//
// Created by 4s4r on 25.12.2023.
//

#include "Customer.h"

// parameterless constructor
Customer::Customer() :
    is_using_(false), id_using_(0)
{}
// constructor
Customer::Customer(std::string name, bool is_using, size_t id_using) :
    name_(std::move(name)), is_using_(is_using), id_using_(id_using)
{}
// destructor
Customer::~Customer()
{
    name_ = "";
    is_using_ = false;
    id_using_ = 0;
}

//getters and setters
void Customer::set_name(std::string name)
{
    name_ = std::move(name);
}

std::string Customer::get_name() const
{
    return name_;
}

void Customer::set_is_using(bool is_using)
{
    is_using_ = is_using;
}

bool Customer::get_is_using() const
{
    return is_using_;
}

void Customer::set_id_using(size_t id_using)
{
    id_using_ = id_using;
}

size_t Customer::get_id_using() const
{
    return id_using_;
}

//methods
void Customer::info() const
{
    std::cout << this->get_name() << " - user's name" << std::endl;
    std::cout << (this->get_is_using() ? "in using" : "not using") << std::endl;
    if (this->get_is_using())
        std::cout << get_id_using() << std::endl;
    else
    {
        std::cout << "no any vehicle in use" << std::endl;
    }
}