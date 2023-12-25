//
// Created by 4s4r on 24.12.2023.
//
#include "Vehicle.h"
#ifndef TRANSPORT_MOTORBIKE_H
#define TRANSPORT_MOTORBIKE_H

enum TYPE_
{
    CROSS,
    ENDURO,
    SPORT,
    UNKNOWN
};

class Motorbike : public Vehicle{
protected:
    std::string category_ = "A";
    TYPE_ type_;
public:
    // parameterless constructor realise
    Motorbike();
    // constructor realise
    Motorbike(size_t id, std::string brand, std::string name, unsigned int power, bool status, unsigned int year, unsigned int run, std::string cur_user, int price, int last_service, TYPE_ type);
    // destructor realise
    ~Motorbike();

    // getters and setters
    void set_type(TYPE_ type);

    TYPE_ get_type() const;

    // methods
    void demo() const override;
};


#endif //TRANSPORT_MOTORBIKE_H
