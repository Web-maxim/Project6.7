#ifndef HOMEAPPLIANCE_H
#define HOMEAPPLIANCE_H

#include "Electronics.h"  

class HomeAppliance : virtual public Electronics {
protected:
    double powerConsumption;

public:
    // Конструктор принимает только powerConsumption, НЕ вызывает Electronics
    HomeAppliance(double powerConsumption);

    virtual ~HomeAppliance();

    virtual void showInfo() const override;
};

#endif
