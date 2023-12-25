cmake_minimum_required(VERSION 3.26)
project(transport)

set(CMAKE_CXX_STANDARD 17)

add_executable(transport main.cpp
        Vehicle.cpp
        Vehicle.h
        Car.cpp
        Car.h
        Track.cpp
        Track.h
        Motorbike.cpp
        Motorbike.h
        Customer.cpp
        Customer.h
        Vehicle_list.cpp
        Vehicle_list.h
        MaintenanceRecord.cpp
        MaintenanceRecord.h
)
