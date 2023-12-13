#include <iostream>
#include "Vehicle.h"

int main(){
    // show works of setters, getters, constructor
    Vehicle car1("volvo", "s6", 100, true, 2000, 0);
    std::cout << car1.get_brand() << std::endl;
    std::cout << car1.get_name() << std::endl;
    std::cout << car1.get_power() << std::endl;
    std::cout << car1.get_status() << std::endl;
    std::cout << car1.get_year() << std::endl;
    car1.set_brand("Aboba_brand");
    car1.set_name("Aboba_name");
    car1.set_power(200);
    car1.set_status(false);
    car1.set_year(2001);
    std::cout << "We've changed fields" << std::endl;
    std::cout << car1.get_brand() << std::endl;
    std::cout << car1.get_name() << std::endl;
    std::cout << car1.get_power() << std::endl;
    std::cout << car1.get_status() << std::endl;
    std::cout << car1.get_year() << std::endl;
}