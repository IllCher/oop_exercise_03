
#ifndef OOP_EXERCISE_03_QUADRATE_H
#define OOP_EXERCISE_03_QUADRATE_H

#include "figure.h"
class quadrate : public figure {
public:
    quadrate();
    quadrate(const point& a, const point& b);
    quadrate(std::istream& is);
    double square() const override;
    point center() const override;
    std::ostream& print(std::ostream& os) const override;
private:
    point _a;
    point _b;
};


#endif //OOP_EXERCISE_03_QUADRATE_H
