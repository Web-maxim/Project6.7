#include "PortableElectronics.h"
#include <iostream>

PortableElectronics::PortableElectronics(double batteryLife)
    : batteryLife(batteryLife) {  
}

PortableElectronics::~PortableElectronics() {}

void PortableElectronics::showInfo() const {
    std::cout << "Portable Electronics: " << brand << " " << model << "\n"
        << "Price: $" << price << "\n"
        << "Battery life: " << batteryLife << " hours\n";
}
