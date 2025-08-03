#include "Electronics.h"
#include <iostream>

Electronics::Electronics(const std::string& brand, const std::string& model, double price)
    : brand(brand), model(model), price(price) {
}

Electronics::~Electronics() {}

void Electronics::showInfo() const {
    std::cout << "Brand: " << brand << "\nModel: " << model << "\nPrice: $" << price << std::endl;
}
