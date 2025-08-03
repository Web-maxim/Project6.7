#include "WashingMachine.h"
#include <iostream>

WashingMachine::WashingMachine(const std::string& brand, const std::string& model, double price,
    double powerConsumption, double loadCapacity)
    : Electronics(brand, model, price),
    HomeAppliance(powerConsumption),
    loadCapacity(loadCapacity) {
}

WashingMachine::~WashingMachine() {}

void WashingMachine::showInfo() const {
    std::cout << "Washing Machine: " << brand << " " << model << "\n";
    std::cout << "Price: $" << price << "\n";
    HomeAppliance::showInfo();
    std::cout << "Load capacity: " << loadCapacity << " kg\n";
}
