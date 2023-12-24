#include <iostream>
#include "Vehicle.h"
#include "Car.h"

int main(){
    // show works of setters, getters, constructor
    Vehicle car1("volvo", "s6", 100, true, 2000, 0, "Mihalych");
    car1.demo();
    car1.set_brand("Aboba_brand");
    car1.set_name("Aboba_name");
    car1.set_power(200);
    car1.set_status(false);
    car1.set_year(2001);
    car1.set_cur_user("Evgenych");
    std::cout << "--\n" << "We've changed fields" << "\n--" << std::endl;
    car1.demo();
    std::cout << "--\n" << "End of demo Vehicle fields." << "\n--" << std::endl;

    // show works of setters, getters, constructor for class Car
    Car car_kupe("Nissan", "Skyline", 420, true, 1990, 100000,"Grisha",  3, 2, 10000, 2011);
    car_kupe.demo();
}