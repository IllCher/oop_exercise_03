//
// Created by Ilya on 11.10.2019.
//

#ifndef OOP_EXERCISE_03_RECTANGLE_H
#define OOP_EXERCISE_03_RECTANGLE_H
#include "point.h"
struct rectangle : figure {
    rectangle(std::istream &in);
    point center() const override;
    void print(std::ostream&) const override;
    double square() const override;
private:
    double left_, right_, bottom_, top_;
};
#endif //OOP_EXERCISE_03_RECTANGLE_H
