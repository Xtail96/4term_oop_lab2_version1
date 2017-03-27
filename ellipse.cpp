#include "ellipse.h"
double Ellipse::getPerimetr() const
{
    return 4 * ( M_PI * minHalfAxis * maxHalfAxis + ( maxHalfAxis - minHalfAxis ) ) / ( minHalfAxis + maxHalfAxis );
}
double Ellipse::getArea()
{
    return M_PI * minHalfAxis * maxHalfAxis;
}
void Ellipse::scale(double scale)
{
    minHalfAxis *= scale;
    maxHalfAxis *= scale;
}
void Ellipse::print(std::ostream &os)
{
    os<<"Id: "<<id<<std::endl;
    os<<"Center( x , y ): ( "<<center_coordinates.x<<" , "<<center_coordinates.y<<" )"<<std::endl;
    os<<"Maximum Half Axis: "<<maxHalfAxis<<std::endl;
    os<<"Minimum Half Axis: "<<minHalfAxis<<std::endl;
    os<<"Perimetr: "<<getPerimetr()<<std::endl;
    os<<"Area: "<<getArea()<<std::endl;
}
