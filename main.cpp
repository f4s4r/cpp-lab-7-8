#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Track.h"
#include "Motorbike.h"
#include "Customer.h"
#include "MaintenanceRecord.h"

int main(){
    // show works of setters, getters, constructor
    Vehicle car1(01, "volvo", "s6", 100, true, 1999, 0, "Mihalych", 1200, 2011);
    car1.demo();
    car1.set_brand("Aboba_brand");
    car1.set_name("Aboba_name");
    car1.set_power(200);
    car1.set_status(false);
    car1.set_year(2024);
    car1.set_cur_user("Evgenych");
    std::cout << "--\n" << "We've changed fields" << "\n--" << std::endl;
    car1.demo();
    std::cout << "--\n" << "End of demo Vehicle fields." << "\n--" << std::endl;

    // show works of setters, getters, constructor for class Car
    Car car_kupe(02, "Nissan", "Skyline", 420, true, 1990, 100000,"Grisha",  1211, 2011, 3, 2);
    car_kupe.demo();

    // show works of setters, getters, constructor for class Track
    Track kamaz(03, "Kamaz", "l1", 210, true, 2010, 1000000,"Peter",  2000, 2018, 1000);
    kamaz.demo();


    // show works of Moto-class
    Motorbike kawasakii(04, "Kawasakii", "Cago", 100, true, 2015, 10000, "Kriko", 12000, 2019, TYPE_::SPORT);
    kawasakii.demo();

    // show customer class
    Customer ivan("Ivan");
    ivan.info();
    ivan.add(111);
    ivan.info();
    ivan.add(222);
    ivan.add(333);
    ivan.add(444);
    ivan.info();
    ivan.remove(0);
    ivan.remove(2);
    ivan.info();

//    MaintenanceRecord record(111, 3, "Good car");
//    record.set_services();
//    record.get_services();
//    record.demo();
    kawasakii.set_num_serv(2);
    kawasakii.set_services();
    kawasakii.demo();


}