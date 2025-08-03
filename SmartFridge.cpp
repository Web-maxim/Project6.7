#include "SmartFridge.h"
#include <iostream>

SmartFridge::SmartFridge(const std::string& brand, const std::string& model, double price,
    double batteryLife, double powerConsumption, double volume, bool hasTouchScreen)
    : Electronics(brand, model, price),
    PortableElectronics(batteryLife),
    Refrigerator(brand, model, price, powerConsumption, volume),
    hasTouchScreen(hasTouchScreen) {
}

SmartFridge::~SmartFridge() {}

void SmartFridge::showInfo() const {
    std::cout << "Smart Fridge: " << brand << " " << model << "\n";
    std::cout << "Price: $" << price << "\n";
    PortableElectronics::showInfo();
    Refrigerator::showInfo();
    std::cout << "Touch screen: " << (hasTouchScreen ? "Yes" : "No") << "\n";
}
