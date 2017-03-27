#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "shape.h"

class Ellipse : public Shape
{
protected:
    double minHalfAxis;
    double maxHalfAxis;
public:
    Ellipse(double x = 0, double y = 0, double angle = 0, double scale = 1, std::string color = "#000", double minHalfAxis = 1, double maxHalfAxis = 2)
        : Shape(x, y, angle, scale, color), minHalfAxis(minHalfAxis), maxHalfAxis(maxHalfAxis){}
    virtual ~Ellipse() {}
    void setAxis(std::pair<double, double> p);
    std::pair<double, double> getAxis();


    void scale(double scale) override;
    double getPerimetr() const  override;
    double getArea() override;

    void print(std::ostream &os) override;
};

#endif // ELLIPSE_H
