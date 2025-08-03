#ifndef SMARTFRIDGE_H
#define SMARTFRIDGE_H

#include "PortableElectronics.h"
#include "Refrigerator.h"

class SmartFridge : public PortableElectronics, public Refrigerator {
    bool hasTouchScreen;

public:
    SmartFridge(const std::string& brand, const std::string& model, double price,
        double batteryLife, double powerConsumption, double volume, bool hasTouchScreen);

    virtual ~SmartFridge();

    virtual void showInfo() const override;
};

#endif
