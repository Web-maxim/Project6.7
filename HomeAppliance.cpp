#include "HomeAppliance.h"
#include <iostream>

HomeAppliance::HomeAppliance(double powerConsumption)
    : powerConsumption(powerConsumption) {  // НЕ вызываем Electronics здесь
}

HomeAppliance::~HomeAppliance() {}

void HomeAppliance::showInfo() const {
    std::cout << "Home Appliance: " << brand << " " << model << "\n"
        << "Price: $" << price << "\n"
        << "Power consumption: " << powerConsumption << " W\n";
}
