#include "ellipse.h"
double Ellipse::getPerimetr() const
{
    return 4 * ( M_PI * aHalfAxis * bHalfAxis + ( bHalfAxis - aHalfAxis ) ) / ( aHalfAxis + bHalfAxis );
}
double Ellipse::getArea()
{
    return M_PI * aHalfAxis * bHalfAxis;
}

int Ellipse::intersect(Shape &s2) const
{
    int intersectCount = 0;
    double x, y;
    for(double t = 0; t <= 2*M_PI; t+=eps)
    {
        x = aHalfAxis * cos(t);
        y = bHalfAxis * sin(t);
        if(s2.isPointOnBorder(Point(x, y)))
        {
            intersectCount++;
        }
    }
    return intersectCount;
}
void Ellipse::scale(double scale)
{
    aHalfAxis *= scale;
    bHalfAxis *= scale;
}
void Ellipse::print(std::ostream &os)
{
    os<<"Ellipse"<<std::endl;
    os<<"Id: "<<id<<std::endl;
    os<<"Center( x , y ): ( "<<center_coordinates.x<<" , "<<center_coordinates.y<<" )"<<std::endl;
    os<<"Maximum Half Axis: "<<bHalfAxis<<std::endl;
    os<<"Minimum Half Axis: "<<aHalfAxis<<std::endl;
    os<<"Perimetr: "<<getPerimetr()<<std::endl;
    os<<"Area: "<<getArea()<<std::endl;
}

bool Ellipse::isPointOnBorder(const Point &p) const
{
    Point r = p;
    r.rotate(current_angle);
    double dx = (r.x - center_coordinates.x) / aHalfAxis;
    double dy = (r.y - center_coordinates.y) / bHalfAxis;
    bool borderFlag = (pow(dx, 2) + pow(dy, 2) - 1) < eps;
    return borderFlag;
}
