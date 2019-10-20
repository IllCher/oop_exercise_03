//
// Created by Ilya on 11.10.2019.
//

#ifndef OOP_EXERCISE_03_DISC_H
#define OOP_EXERCISE_03_DISC_H
#include "figure.h"
struct disc : figure {
    figure(const point& c, double r);
    point center() const override;
    void print(std::ostream&) const override;
    double square() const override;
private:
    point center_;
    double radius_;
};
#endif //OOP_EXERCISE_03_DISC_H
