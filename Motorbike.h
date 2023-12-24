//
// Created by 4s4r on 24.12.2023.
//
#include "Vehicle.h"
#ifndef TRANSPORT_MOTORBIKE_H
#define TRANSPORT_MOTORBIKE_H


class Motorbike : public Vehicle{
protected:
    int number_of_seats_;
    std::string category_ = "A";
    enum type : std::string
    {
        SPORT,
        ENDURO,
        CROSS,
        UNKNOWN
    };
public:


};


#endif //TRANSPORT_MOTORBIKE_H
