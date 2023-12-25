//
// Created by 4s4r on 25.12.2023.
//

#include "Vehicle_list.h"

// parameterless constructor
Vehicle_list::Vehicle_list() :
    data_(nullptr), size_(0)
{
    data_ = nullptr;
}

// constructor
Vehicle_list::Vehicle_list(size_t size) :
    data_(nullptr), size_(size)
{
    data_ = new size_t[size];
}

// destructor
Vehicle_list::~Vehicle_list()
{
    delete[] data_;
}

void Vehicle_list::add(size_t id)
{
    size_t* new_data = new size_t[size_ + 1];
    for (size_t i = 0; i < size_ + 1; ++i)
    {
        if (i < size_)
            new_data[i] = data_[i];
        else
            new_data[i] = id;
    }
    delete[] data_;
    data_ = new_data;
    size_++;
}

void Vehicle_list::remove(size_t index)
{
    if (index >= size_)
    {
        std::cerr << "Invalid index to remove" << std::endl;
    }
    else {
        size_t* new_data = new size_t[size_ - 1];
        for (size_t i = 0; i < size_ - 1; ++i) {
            if (i >= index)
                new_data[i] = data_[i + 1];
            else
                new_data[i] = data_[i];
        }
        delete[] data_;
        data_ = new_data;
    }
    size_--;
}

void Vehicle_list::demo() const
{
    std::cout << size_ << " vehicle in use, identifiers:" << std::endl;
    if (size_ != 0) {
        for (size_t i = 0; i < size_; ++i) {
            std::cout << data_[i] << std::endl;
        }
    }
}

//size_t get(size_t index) const;