#ifndef ARC_H
#define ARC_H
#include "shape.h"

class Arc : public Shape
{
protected:
    double startAngle;
    double finishAngle;
    double radius;
public:
    Arc(double x, double y,  double angle = 0, double scale = 1, std::string color = "#000", double startAngle = 0, double finishAngle = 90, double radius = 1)
        : Shape(x, y, angle, scale, color), startAngle(startAngle), finishAngle(finishAngle), radius(radius){}
    virtual ~Arc() {}
    void scale(double scale) override;
    double getPerimetr() const override;
    double getArea() override;

    void print(std::ostream &os) override;
};

#endif // ARC_H
