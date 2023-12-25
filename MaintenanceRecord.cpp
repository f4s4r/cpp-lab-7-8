//
// Created by 4s4r on 25.12.2023.
//

#include "MaintenanceRecord.h"


MaintenanceRecord::MaintenanceRecord() :
    id_(0), services_(nullptr), num_serv_(0), cmnt_to_lst_serv_("")
{}
MaintenanceRecord::MaintenanceRecord(size_t id, int num_serv, std::string comment) :
    id_(id), services_(nullptr), num_serv_(num_serv), cmnt_to_lst_serv_(std::move(comment))
{}
MaintenanceRecord::~MaintenanceRecord()
{
    id_ = 0;
    services_ = nullptr;
    num_serv_ = 0;
    cmnt_to_lst_serv_ = "";
}

//getters and setters
void MaintenanceRecord::set_id(size_t id)
{
    id_ = id;
}

size_t MaintenanceRecord::get_id() const
{
    return id_;
}

void MaintenanceRecord::set_services()
{
    std::cout << "Please, enter the dates: " << std::endl;
    std::string* temp = new std::string[num_serv_];
    for (size_t i = 0; i < num_serv_; ++i)
    {
        std::string prom;
        std::cin >> prom;
        temp[i] = prom;
    }
    std::cout << "You've finished entering the services" << std::endl;
    if (services_ != nullptr) {
        delete[] services_;
    }
    services_ = temp;
}

std::string* MaintenanceRecord::get_services() const
{
    return services_;
}

void MaintenanceRecord::set_num_serv(int num)
{
    num_serv_ = num;
}

int MaintenanceRecord::get_num_serv() const
{
    return num_serv_;
}

void MaintenanceRecord::set_comment(std::string comment)
{
    cmnt_to_lst_serv_ = std::move(comment);
}

std::string MaintenanceRecord::get_comment() const
{
    return cmnt_to_lst_serv_;
}

//methods
void MaintenanceRecord::demo() const
{
    if (id_ == 0 || services_ == nullptr || num_serv_ == 0)
        std::cout << "No records" << std::endl;
    else
    {
        std::cout << id_ << " - vehicle's identifier" << std::endl;
        for(int i = 0; i < num_serv_; ++i)
        {
            std::cout << services_[i] << std::endl;
        }

    }
    std::cout << "All services" << std::endl;
}