#ifndef REFRIGERATOR_H
#define REFRIGERATOR_H

#include "HomeAppliance.h"  

class Refrigerator : public HomeAppliance {
protected:
    double volume;

public:
    // Принимает powerConsumption и volume
    Refrigerator(const std::string& brand, const std::string& model, double price,
        double powerConsumption, double volume);

    virtual ~Refrigerator();

    virtual void showInfo() const override;
};

#endif
