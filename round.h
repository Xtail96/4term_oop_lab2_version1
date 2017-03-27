#ifndef ROUND_H
#define ROUND_H
#include "arc.h"

class Round : public Arc
{
public:
    Round(double x = 0, double y = 0, double angle = 0, double scale = 1, std::string color = "#000", double radius = 1)
        : Arc(x, y, angle, scale, color, 0, 360, radius){}
    virtual ~Round(){}

    double getPerimetr() const override;
    double getArea() override;

    void print(std::ostream &os) override;
};

#endif // ROUND_H
