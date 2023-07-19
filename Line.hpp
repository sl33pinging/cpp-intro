#pragma once
#include "Point.hpp"

class Line{
  public:
  Point p1, p2;
  Line(const Point &pa, const Point &pb);

  double length();

  double distance_to_point(Point p3);
};