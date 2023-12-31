//
// Created by 4s4r on 25.12.2023.
//

#ifndef TRANSPORT_MAINTENANCERECORD_H
#define TRANSPORT_MAINTENANCERECORD_H
#include <iostream>

class MaintenanceRecord {
private:
    std::string* services_;
    int num_serv_;
    std::string cmnt_to_lst_serv_;
public:
    //constructor
    MaintenanceRecord();
    MaintenanceRecord(int num_serv, std::string comment);
    ~MaintenanceRecord();

    //getters and setters

    void set_services();

    std::string* get_services() const;

    void set_num_serv(int num);

    int get_num_serv() const;

    void set_comment(std::string comment);

    std::string get_comment() const;

    //methods
    void demo(size_t id_) const;
};


#endif //TRANSPORT_MAINTENANCERECORD_H
