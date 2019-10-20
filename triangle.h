
#ifndef OOP_EXERCISE_03_TRIANGLE_H
#define OOP_EXERCISE_03_TRIANGLE_H
#include "point.h"
#include "figure.h"

class triangle : public figure {
public:
    triangle();
    triangle(const point& a, const point& b, const point& c);
    double square() const override;
    point center() const override;
    std::ostream& print(std::ostream&) const override;
private:
    point _a;
    point _b;
    point _c;
};


#endif //OOP_EXERCISE_03_TRIANGLE_H
