#include "Line.hpp"
#include "Point.hpp"
#include <cmath>

Line::Line(const Point &pa, const Point &pb): p1(pa), p2(pb){ // this copies the variable before immediately after creating the instance, so before u dont need to initialize the value in Point
    // this->p1 = p1;
    // this->p2 = p2;
  }
double Line::length(){
    return p1.distance_to_point(p2);  
}

double Line::distance_to_point(Point p3){
    Point p4(0, 0); //point of intersection of the lines
    double slope1 = (p1.y()-p2.y()) / (p1.x()-p2.x());
    double slope2 = -(1/slope1);
    double y_intercept_1 = p1.y()-(slope1*p1.x());
    double y_intercept_2 = p3.y()-(slope2*p3.x());
    p4.set_x((y_intercept_2 - y_intercept_1)/(slope1 - slope2));
    p4.set_y(slope1*p4.x() + y_intercept_1);
    return sqrt(pow((p4.x() - p3.x()), 2) + pow((p4.y() - p3.y()), 2));
} 