#include "Smartphone.h"
#include <iostream>

Smartphone::Smartphone(const std::string& brand, const std::string& model, double price,
    double batteryLife, int cameraMP)
    : Electronics(brand, model, price),
    PortableElectronics(batteryLife),
    cameraMegapixels(cameraMP) {
}

Smartphone::~Smartphone() {}

void Smartphone::showInfo() const {
    std::cout << "Smartphone: " << brand << " " << model << "\n";
    std::cout << "Price: $" << price << "\n";
    PortableElectronics::showInfo();
    std::cout << "Camera: " << cameraMegapixels << " MP\n";
}
