#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include "Point.hpp"
#include "Line.hpp"

int add(int x, int y)
{
  return x + y;
}

int subtract(int x, int y){
  return x - y;
}

int multiply(int x, int y){
  return x * y;
}

double divide(int x, int y){
  return x / (double) y;
}

class Rectangle{
  public:
    int width;
    int height;

    int area(){
      return width * height;
    }
};

class Circle {
  public:
    int radius;
    Circle(const int &radius){
      this->radius = radius;
    }
    double area(){
      return pow(radius, 2)*M_PI;
    }
};

// class Point{
//   public:
//   double x, y;
//   Point(const double &x, const double &y){
//     this->x = x;
//     this->y = y;
//   }

//   double distance_to_origin(){
//     return sqrt(pow(x, 2) + pow(y, 2));
//   }

//   double distance_to_point(Point p){
//     return sqrt(pow((x - p.x), 2) + pow((y - p.y), 2));
//   }
// };

// class Line{
//   public:
//   Point p1, p2;
//   Line(const Point &p1, const Point &p2): p1(p1), p2(p2){ // this copies the variable before immediately after creating the instance, so before u dont need to initialize the value in Point
//     // this->p1 = p1;
//     // this->p2 = p2;
//   }
//   double length(){
//     return p1.distance_to_point(p2);  
//   }

//   double distance_to_point(Point p3){
//     Point p4(0, 0); //point of intersection of the lines
//     double slope1 = (p1.y()-p2.y()) / (p1.x()-p2.x());
//     double slope2 = -(1/slope1);
//     double y_intercept_1 = p1.y()-(slope1*p1.x());
//     double y_intercept_2 = p3.y()-(slope2*p3.x());
//     p4.set_x((y_intercept_2 - y_intercept_1)/(slope1 - slope2));
//     p4.set_y(slope1*p4.x() + y_intercept_1);
//     return sqrt(pow((p4.x() - p3.x()), 2) + pow((p4.y() - p3.y()), 2));
//   } 
// };

class Triangle{
  //initialize
  Point p1, p2, p3;
  Triangle(const Point &p1, const Point &p2, const Point &p3): p1(p1), p2(p2), p3(p3){}
  double area(){
    return std::fabs((p1.x()-p3.x())*(p2.y()-p1.y())- (p1.x()-p2.x())*(p3.y()-p1.y()))/2; //shoelace formula forumla
  }
};

class Polygon{
  public:
  std::vector<Point> poly_points;
  //TODO: Do triangles for every one of them, and then do the points sort thing using centroid and angles from point a and centroid. 
  Polygon(const std::vector<Point> poly_points): poly_points(poly_points){}
  double area(){
    double Poly_area = 0;
    for(int i = 0; i < poly_points.size() - 1; i++){
      Poly_area += std::fabs((poly_points[i].x()-poly_points[i+2].x())*(poly_points[i+1].y()-poly_points[i].y())- (poly_points[i].x()-poly_points[i+1].x())*(poly_points[i+2].y()-poly_points[i].y()))/2;
    }
    return Poly_area;
  }
  double perimeter(){
    double Poly_perimeter = 0;
    for(int i = 0; i < poly_points.size(); i++){
      Poly_perimeter += sqrt(pow((poly_points[i+1].x() - poly_points[i].x()), 2) + pow((poly_points[i+1].y() - poly_points[i].y()), 2));
    }
    return Poly_perimeter;
  }
};

int main(){
  std::string name = "Daniel";
  std::string classroom = "115";
  std::cout << "Name: " << name << std::endl;
  std::cout << "Classroom: " << classroom << std::endl;

  int x = 5;
  int y = 7;
  int z = x + y;
  int w = x * y * z;
  float v = x / (float) y;

  int &a = x;

  std::cout << "The sum of " << x << " and " << y << " is " << add(x, y) << std::endl;
  std::cout << "The product of " << x << ", " << y << ", and " << z << " is " << multiply(multiply(x, y), z) << std::endl;
  std::cout << "The quotient of " << x << " and " << y << " is " << divide(x, y) << std::endl;

  Circle c(10);

  std::cout << "the area of the circle c is " << c.area() << std::endl;

  Point p1(1, 3);
  Point p2(2, 6);
  Point p3(4, 10);
  
  std::vector<Point> poly_points = {p1, p2, p3};

  Polygon poly1(poly_points);

  std::cout << poly1.area() << std::endl;

  return 0;
}
