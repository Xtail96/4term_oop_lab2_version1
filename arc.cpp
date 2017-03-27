#include "arc.h"
void Arc::scale(double scale)
{
    radius *= scale;
}
double Arc::getArea()
{
    return 0;
}
double Arc::getPerimetr() const
{
    double n = fabs(startAngle - finishAngle);
    double l = (M_PI * radius / 180) * n;
    return l;
}
void Arc::print(std::ostream &os)
{
    os<<"Id: "<<id<<std::endl;
    os<<"Center( x , y ): ( "<<center_coordinates.x<<" , "<<center_coordinates.y<<" )"<<std::endl;
    os<<"Start Angle: "<<startAngle<<std::endl;
    os<<"Finish Angle: "<<finishAngle<<std::endl;
    os<<"Radius: "<<radius<<std::endl;
}
