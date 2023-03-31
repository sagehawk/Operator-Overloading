#include "point.h"

#include <iostream>
#include <cmath>

// read standard 2D point notation (x,y) -- ignore
// window dressing
void Point::Input(void)
{
    char dummy;
    cin >> dummy >> x >> dummy >> y >> dummy;
    return;
}

// output standard 2D point notation (x,y)
void Point::Output(void)
{
    cout << '(' << x << ", " << y << ')';
    return;
}

// calculate distance between two 2D points --
// the one that called us and the argument
double Point::distance(Point other)
{
    return sqrt(pow(other.x-x, 2.0) +
                pow(other.y-y, 2.0));
}

// set coordinates to programmer-specified values
void Point::set_x(double new_x)
{
    x = new_x;        // no error checking since anything is legal
    return;
}

// set coordinates to programmer-specified values
void Point::set_y(double new_y)
{
    y = new_y;        // no error checking since anything is legal
    return;
}

// construct Point by default -- no values specified
Point::Point(void)
{
    x = y = 0.0;
}

// construct Point given initial x,y values
Point::Point(double new_x, double new_y)
{
    set_x(new_x);
    set_y(new_y);
}

// creates a point flipped about the x axis from us
Point Point::flip_x(void)
{
    return Point(x,-y);
}

// creates a point flipped about the y axis from us
Point Point::flip_y(void)
{
    return Point(-x,y);
}

// creates a point shifted along the x axis from us
Point Point::shift_x(double move_by)
{
    return Point(x+move_by,y);
}

// creates a point shifted along the y axis from us
Point Point::shift_y(double move_by)
{
    return Point(x,y+move_by);
}