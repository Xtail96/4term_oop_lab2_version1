#include "round.h"
double Round::getArea()
{
    double s = M_PI * pow(radius, 2);
    return s;
}
double Round::getPerimetr() const
{
    double l = 2 * M_PI * radius;
    return l;
}
void Round::print(std::ostream &os)
{
    os<<"Id: "<<id<<std::endl;
    os<<"Center( x , y ): ( "<<center_coordinates.x<<" , "<<center_coordinates.y<<" )"<<std::endl;
    os<<"Radius: "<<radius<<std::endl;
    os<<"Perimetr: "<<getPerimetr()<<std::endl;
    os<<"Area: "<<getArea()<<std::endl;
}
