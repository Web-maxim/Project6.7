#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H

#include "HomeAppliance.h"  

class WashingMachine : public HomeAppliance {
    double loadCapacity;

public:
    WashingMachine(const std::string& brand, const std::string& model, double price,
        double powerConsumption, double loadCapacity);

    virtual ~WashingMachine();

    virtual void showInfo() const override;
};

#endif
