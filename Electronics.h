#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include <string>

class Electronics {
protected:
    std::string brand;
    std::string model;
    double price;

public:
    Electronics() : brand(""), model(""), price(0.0) {} // добавлен конструктор по умолчанию

    Electronics(const std::string& brand, const std::string& model, double price);
    virtual ~Electronics();

    virtual void showInfo() const;
};

#endif
