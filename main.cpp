#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Track.h"
#include "Motorbike.h"
#include "Customer.h"
#include "MaintenanceRecord.h"

int main() {
    std::string user_name;
    int num_of_veh, temp_choise;

    Motorbike kawasaki(10, "Kawasaki", "H2r", 326, false, 2020, 11000, "None", 19000, 2023, TYPE_::SPORT);
    Motorbike honda(11, "HONDA", "CRF300", 25, false, 2022, 33000, "None", 12000, 2023, TYPE_::ENDURO);
    Track volvo(20, "Volvo", "FH", 600, false, 2019, 1500300, "None", 50000, 2023, 12000);
    Car lamborghini(30, "Lamborghini", "Aventador", 750, false, 2017, 10000, "None", 100000, 2022, 2, 2);
    Car bugatti(31, "Bugatti", "Veyron", 1001, false, 2020, 7000, "None", 120000, 2023, 2, 2);
    Car vaz(32, "VAZ", "2107", 100, false, 1999, 120000, "None", 500, 2001, 5, 7);

    std::cout << "Enter your name: " << std::endl;
    std::cin >> user_name;
    Customer user(user_name);
    std::cout << "How many vehicles you want to order?: " << std::endl;
    std::cin >>  num_of_veh;
    for (int i = 0; i < num_of_veh; i++)
    {
        std::cout << "What type of vehicle you want to order?" << std::endl
                  << "[1] - motorbike" << std::endl
                  << "[2] - truck" << std::endl
                  << "[3] - car" << std::endl;
        std::cin >> temp_choise;
        if (temp_choise > 3 || temp_choise < 1)
                std::cerr << "Incorrect number" << std::endl;
        else if (temp_choise == 1)
        {
                std::cout << "Do you wanto to ind out the characteristics?: \n [1] - yes \n [2] - no" << std::endl;
                std::cin >> temp_choise;
            if (temp_choise == 1)
            {
                std::cout << "Kawasaki characteristics: " << std::endl;
                kawasaki.demo();
                std::cout << "Honda characteristics: " << std::endl;
                honda.demo();
            }
            std::cout << "What you would like to order?: " << std::endl
            << kawasaki.get_brand() << " " << kawasaki.get_name() << std::endl
            << honda.get_brand() << " " << honda.get_name() << std::endl
            << "[1] - kawasaki" << std::endl
            << "[2] - honda" << std::endl;
            std::cin >> temp_choise;
            if (temp_choise == 1)
            {
                user.add(10);
                kawasaki.set_status(true);
                kawasaki.set_cur_user(user_name);
            }
            if (temp_choise == 2)
            {
                user.add(11);
                honda.set_status(true);
                honda.set_cur_user(user_name);
            }
        }
        else if (temp_choise != 1)
        {
            std::cout << "Not implemented" << std::endl;
        }
    }
    std::cout << "Your account: " << std::endl;
    user.info();
}
// show works of setters, getters, constructor
//    Vehicle car1(01, "volvo", "s6", 100, true, 1999, 0, "Mihalych", 1200, 2011);
//    car1.demo();
//    car1.set_brand("Aboba_brand");
//    car1.set_name("Aboba_name");
//    car1.set_power(200);
//    car1.set_status(false);
//    car1.set_year(2024);
//    car1.set_cur_user("Evgenych");
//    std::cout << "--\n" << "We've changed fields" << "\n--" << std::endl;
//    car1.demo();
//    std::cout << "--\n" << "End of demo Vehicle fields." << "\n--" << std::endl;
//
//    // show works of setters, getters, constructor for class Car
//    Car car_kupe(02, "Nissan", "Skyline", 420, true, 1990, 100000,"Grisha",  1211, 2011, 3, 2);
//    car_kupe.demo();
//
//    // show works of setters, getters, constructor for class Track
//    Track kamaz(03, "Kamaz", "l1", 210, true, 2010, 1000000,"Peter",  2000, 2018, 1000);
//    kamaz.demo();
//
//
//    // show works of Moto-class
//    Motorbike kawasakii(04, "Kawasakii", "Cago", 100, true, 2015, 10000, "Kriko", 12000, 2019, TYPE_::SPORT);
//    kawasakii.demo();
//
//    // show customer class
//    Customer ivan("Ivan");
//    ivan.info();
//    ivan.add(111);
//    ivan.info();
//    ivan.add(222);
//    ivan.add(333);
//    ivan.add(444);
//    ivan.info();
//    ivan.remove(0);
//    ivan.remove(2);
//    ivan.info();

//    MaintenanceRecord record(111, 3, "Good car");
//    record.set_services();
//    record.get_services();
//    record.demo();
//    kawasakii.set_num_serv(2);
//    kawasakii.set_services();
//    kawasakii.demo();