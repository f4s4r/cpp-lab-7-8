//
// Created by 4s4r on 25.12.2023.
//

#include "Customer.h"

// parameterless constructor
Customer::Customer() :
    name_("Unknown"), list_(0)
{}
// constructor
Customer::Customer(std::string name) :
    name_(std::move(name)), list_(0)
{}
// destructor
Customer::~Customer()
{
    name_ = "";
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

//void Customer::set_is_using(bool is_using)
//{
//    is_using_ = is_using;
//}
//
//bool Customer::get_is_using() const
//{
//    return is_using_;
//}

//void Customer::set_id_using(size_t id_using)
//{
//    id_using_ = id_using;
//}
//
//size_t Customer::get_id_using() const
//{
//    return id_using_;
//}

//methods

void Customer::add(size_t id)
{
    this->list_.add(id);
}

void Customer::remove(size_t index)
{
    this->list_.remove(index);
}

void Customer::info() const
{
    std::cout << "----" << std::endl;
    std::cout << this->get_name() << " - user's name" << std::endl;
    this->list_.demo();
    std::cout << "----" << std::endl;
}

// operator

//Customer Customer::operator+(const size_t& id)
//{
//    this->add(id);
//    return *this;
//}