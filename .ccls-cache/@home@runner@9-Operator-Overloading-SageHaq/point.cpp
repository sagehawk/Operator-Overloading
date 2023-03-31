#include "point.h"

#include <cmath>
#include <iostream>

using namespace std;

// read standard 2D point notation (x,y) -- ignore
// window dressing
void Point::Input(void) {
  char dummy;
  cin >> dummy >> x >> dummy >> y >> dummy;
  return;
}

// output standard 2D point notation (x,y)
void Point::Output(void) {
  cout << '(' << x << ", " << y << ')';
  return;
}

// calculate distance between two 2D points --
// the one that called us and the argument
double Point::distance(Point other) {
  return sqrt(pow(other.x - x, 2.0) + pow(other.y - y, 2.0));
}

// set coordinates to programmer-specified values
void Point::set_x(double new_x) {
  x = new_x; // no error checking since anything is legal
  return;
}

// set coordinates to programmer-specified values
void Point::set_y(double new_y) {
  y = new_y; // no error checking since anything is legal
  return;
}

// construct Point by default -- no values specified
Point::Point(void) { x = y = 0.0; }

// construct Point given initial x,y values
Point::Point(double new_x, double new_y) {
  set_x(new_x);
  set_y(new_y);
}

// creates a point flipped about the x axis from us
Point Point::flip_x(void) { return Point(x, -y); }

// creates a point flipped about the y axis from us
Point Point::flip_y(void) { return Point(-x, y); }

// creates a point shifted along the x axis from us
Point Point::shift_x(double move_by) { return Point(x + move_by, y); }

// creates a point shifted along the y axis from us
Point Point::shift_y(double move_by) { return Point(x, y + move_by); }

Point operator-(Point p1, Point p2) { return Point(p1.x - p2.x, p1.y - p2.y); }

istream &operator>>(istream &is, Point &p) {
  char dummy;
  is >> dummy >> p.x >> dummy >> p.y >> dummy;
  return is;
}

ostream &operator<<(ostream &os, Point &p) {
  os << '(' << p.x << ", " << p.y << ')';
  return os;
}

bool operator==(Point p1, Point p2) { return p1.x == p2.x && p1.y == p2.y; }

bool operator!=(Point p1, Point p2) { return !(p1 == p2); }

Point operator/(Point p1, Point p2) {
  return Point((p1.x + p2.x) / 2.0, (p1.y + p2.y) / 2.0);
}
Point Point::operator=(Point other) {
  x = other.x;
  y = other.y;
  return *this;
}