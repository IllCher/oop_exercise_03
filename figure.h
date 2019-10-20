//
// Created by Ilya on 11.10.2019.
//
#include <iostream>
#include "point.h"

#ifndef OOP_EXERCISE_03_FIGURE_H
#define OOP_EXERCISE_03_FIGURE_H
struct figure {
    virtual point center() const = 0;
    virtual void print(std::ostream&) const = 0;
    virtual double square() const = 0;
    virtual ~figure() {}
};
#endif //OOP_EXERCISE_03_FIGURE_H
