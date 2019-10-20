#include "quadrate.h"
quadrate::quadrate(): _a{0, 0}, _b{0, 0}{}
quadrate::quadrate(const point& a, const point& b) : _a{a}, _b{b}{}
quadrate::quadrate(std::istream &is) {
    is >> _a >> _b;
};
double quadrate::square() const {
    return (_b.x - _a.x) * (_b.x - _a.x);
}
point quadrate::center() const {
    return point{(_a.x + _b.x) / 2, (_a.y + _b.y) / 2};
}
std::ostream& quadrate::print(std::ostream& os) const {
    os << _a  << _b << std::endl;
    return os;
}

