#ifndef PORTABLEELECTRONICS_H
#define PORTABLEELECTRONICS_H

#include "Electronics.h"  

class PortableElectronics : virtual public Electronics {
protected:
    double batteryLife;

public:
    // Конструктор принимает только batteryLife, НЕ вызывает Electronics
    PortableElectronics(double batteryLife);

    virtual ~PortableElectronics();

    virtual void showInfo() const override;
};

#endif
