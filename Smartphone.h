#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include "PortableElectronics.h"  

class Smartphone : public PortableElectronics {
    int cameraMegapixels;

public:
    Smartphone(const std::string& brand, const std::string& model, double price,
        double batteryLife, int cameraMP);

    virtual ~Smartphone();

    virtual void showInfo() const override;
};

#endif
