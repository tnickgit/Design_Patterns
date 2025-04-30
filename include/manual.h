#pragma once
#include <iostream>
#include <string>

class Manual {
public:
    std::string engine, seats, tripComputer, gps;
    std::string color;
    bool hasSunroof;

    void listFeatures() const {
        std::cout << "Manual Features: ";
        std::cout << "\n  Engine: " << engine;
        std::cout << "\n  Seats: " << seats;
        std::cout << "\n  TripComputer: " << tripComputer;
        std::cout << "\n  GPS: " << gps;
        std::cout << "\n  Color: " << color;
        std::cout << "\n  Has Sunroof: " << hasSunroof << "\n";
    }
};