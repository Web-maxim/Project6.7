#include "Refrigerator.h"
#include <iostream>

Refrigerator::Refrigerator(const std::string& brand, const std::string& model, double price,
    double powerConsumption, double volume)
    : Electronics(brand, model, price),  // инициализация виртуального базового класса
    HomeAppliance(powerConsumption),
    volume(volume) {
}

Refrigerator::~Refrigerator() {}

void Refrigerator::showInfo() const {
    std::cout << "Refrigerator: " << brand << " " << model << "\n";
    std::cout << "Price: $" << price << "\n";
    HomeAppliance::showInfo();
    std::cout << "Volume: " << volume << " liters\n";
}
