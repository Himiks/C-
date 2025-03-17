/*Create program in C++ in OOP structure, splitting it at least into 3 files.The class header should be put in header
file(program.h).All the methods should be implemented outside the header – in a special C++ file(program.cpp).
Function main should be put in yet another C++ file(main.cpp).By default, all class fields are private, but class methods - public.
Unlike previous programs, it is not required to follow specific interface rules regarding repeated execution here(function main can be hard - coded).
See also other published requirements.
D18.Create class "Dot" containing two real numbers - coordinates of dot location.Create methods : (1) constructor to set given initial values,
(2) destructor which should notify about deleting the object, (3) method "change" with two parameters to add them to existing coordinate values, 
(4) method "print" to print on screen coordinates of dot, (5) method "Distance" with two arguments - coordinates of another dot, to print distance
between both dots.
*/




#include "program.h"
int main() {
    Dot point1(5.0, 6.0);
    if (!point1.isTrue()) {
        cout << " Incorrect value " << endl;
    }
    else {
        Dot point2(4.0, 5.0);
        point1.change(2.0, 3.0);
        point1.print();
        point1.distance(point2);
    }
}

