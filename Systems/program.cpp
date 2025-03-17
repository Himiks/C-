#include "program.h"


Dot::Dot(double X, double Y) {
    x = X;
    y = Y;

}
Dot::~Dot() {
    cout << " Dot Deleted by destructor " << endl;
}
void Dot::change(double ADD1, double ADD2) {
    x += ADD1;
    y += ADD2;

}
void Dot::print() {
    cout << " The coordinates of dot : " << x << ", " << y << endl;

}
void Dot::distance(Dot Point2) {
    double distance = sqrt(pow(x - Point2.x, 2)) + pow(y - Point2.y, 2);
    cout << " Distance to second Dot " << distance << endl;
}
bool Dot::isTrue() {
    return 1;
}

