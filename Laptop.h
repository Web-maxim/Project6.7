#ifndef LAPTOP_H
#define LAPTOP_H

#include "PortableElectronics.h"  

class Laptop : public PortableElectronics {
    double screenSize;

public:
    Laptop(const std::string& brand, const std::string& model, double price, double batteryLife, double screenSize);
    virtual ~Laptop();

    virtual void showInfo() const override;
};

#endif
