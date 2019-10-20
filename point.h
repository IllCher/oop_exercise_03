//
// Created by Ilya on 11.10.2019.
//

#ifndef OOP_EXERCISE_03_POINT_H
#define OOP_EXERCISE_03_POINT_H
#include <iostream>
struct point {
    double x,y;
};

std::istream operator>> (std::istream &is, point &a );
#endif //OOP_EXERCISE_03_POINT_H
