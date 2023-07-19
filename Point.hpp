#pragma once

class Point
{
private:
  double m_d_x;
  double m_d_y;

public:
  Point(double x, double y);

  double x(){ return m_d_x; }
  double y(){ return m_d_y; }
  double distance_to_origin();
  double distance_to_point(Point p);
  double set_x(double x_value);
  double set_y(double y_value);
};