#include "Laptop.h"
#include <iostream>

Laptop::Laptop(const std::string& brand, const std::string& model, double price, double batteryLife, double screenSize)
    : Electronics(brand, model, price),  // инициализация виртуального базового класса только здесь
    PortableElectronics(batteryLife),
    screenSize(screenSize) {
}

Laptop::~Laptop() {}

void Laptop::showInfo() const {
    std::cout << "Laptop: " << brand << " " << model << "\n";
    std::cout << "Price: $" << price << "\n";
    PortableElectronics::showInfo();
    std::cout << "Screen size: " << screenSize << " inches\n";
}
