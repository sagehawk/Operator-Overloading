#ifndef POINT_CLASS_HEADER_INCLUDED
#define POINT_CLASS_HEADER_INCLUDED

// A 2D point class
class Point
{
    double x, // x coordinate of point
           y; // y coordinate of point

public:
    Point(void);
    Point(double new_x, double new_y);

    void Output(void);   // output this point
    void Input(void);    // input this point
    double distance(Point other);   // distance between this point and other

    double get_x(void) { return x; }
    double get_y(void) { return y; }

    void set_x(double new_x);
    void set_y(double new_y);

    Point flip_x(void);
    Point flip_y(void);

    Point shift_x(double move_by);
    Point shift_y(double move_by);
};

#endif