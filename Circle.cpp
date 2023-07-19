#include "Circle.hpp"
#include <cmath>

Circle::Circle(const int &radius){
    this->radius = radius;
}
double Circle::area(){
    return pow(radius, 2)*M_PI;
}