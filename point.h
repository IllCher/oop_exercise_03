
#ifndef OOP_EXERCISE_03_POINT_H
#define OOP_EXERCISE_03_POINT_H
#include <iostream>
struct point {
    double x,y;
};
point operator+ (point lhs, point rhs);
point operator- (point lhs, point rhs);
point operator* (point p, double t);
point operator/ (point p, double t);
std::istream &operator>> (std::istream &is, point &p );
std::ostream &operator<< (std::ostream &os, const point &p );

#endif //OOP_EXERCISE_03_POINT_H
