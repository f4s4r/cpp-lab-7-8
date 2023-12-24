//
// Created by 4s4r on 24.12.2023.
//
#include "Vehicle.h"
#ifndef TRANSPORT_TRACK_H
#define TRANSPORT_TRACK_H


class Track : public Vehicle{
protected:
    int max_to_lift_;
    const std::string category_ = "C";
public:
    // parameterless constructor realise
    Track();
    // constructor realise
    Track(std::string brand, std::string name, unsigned int power, bool status, unsigned int year, unsigned int run, std::string cur_user, int price, int last_service, int max_to_lift);
    // destructor realise
    ~Track();

    //getters and setters
    void set_max_to_lift(int max_to_lift);

    int get_max_to_lift() const;

    //methods
    void demo() const override;
};


#endif //TRANSPORT_TRACK_H
