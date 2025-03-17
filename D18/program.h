#ifndef Program_H
#define Program_H



#include <iostream>
#include <cmath>
using namespace std;
class Dot {
private:
    double x;
    double y;
public:

    Dot(double X, double Y);
        ~Dot();
        void change(double ADD1, double ADD2);
        void print();
        void distance(Dot Point2);
        bool isTrue();
   



};
#endif