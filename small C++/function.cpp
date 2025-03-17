#include <iostream>
using namespace std;
const double Pi = 3.14159;
double Area(double redius);
double Circumference(double radius);
int main()
{
    cout << "Enter a radius ";
    double radius;
    cin >> radius;
    cout << "Area equalls to : " << Area(radius) << endl;
    cout << "Perimetr equalls to " << Circumference(radius) << endl;
    return 0;

}
double Area(double radius) {
    return Pi * radius * radius;
}
double Circumference(double radius) {
    return 2 * Pi * radius;
}

#include <iostream>
using namespace std;
const double Pi = 3.14159;
double SurfaceArea(double radius, double height);

int main() {
    int radius;
    int height;
    cout << "Radius : ";
    cin >> radius;
    cout << "Height : ";
    cin >> height;
    cout << "Area: " << SurfaceArea(radius, height)<< endl;
    return 0;
}
double SurfaceArea(double radius, double height) {
    double area = 2 * Pi * radius * (radius + height);
    return area;
}


 #include <iostream>
using namespace std;
int GetFibNumber(int index) {
    if (index < 2)
        return index;
    else 
        return GetFibNumber(index - 1) + GetFibNumber(index - 2);

}
int main() {

    cout << "Enter an index of number Fibonacci, starting with 0: "; 
    int index;
    cin >> index;
    cout << "Number of Fibonacci is " << GetFibNumber(index) << endl;
    return 0;

}


#include <iostream>
using namespace std;
const double Pi = 3.14159265;
void QueryAndCalculate() {
    cout << "Enter a radius : ";
    double radius;
    cin >> radius;
    cout << "Area : " << Pi * radius * radius << endl;
    cout << "Would you like to calculate perimetr (y/n): ? " << endl;
    char calcCircum;
    cin >> calcCircum;
    if (calcCircum == 'y')
     cout << "Perimetr: " << 2 * Pi * radius << endl;
    
}

int main() {

    QueryAndCalculate();
    return 0;

}

#include <iostream>
#include <complex>
using namespace std;

int main() {

    int num = 0;
    int prew = INT_MIN;
    string numLine = "";
    bool first = true;
    bool Acsendant = true;
    while (true) {
        cout << "Enter a number " << endl;
        cin >> num;
        if (num == 0) {
            if (first==false) {
                break;
            }
        }

        if (num > prew) {
            numLine += to_string(num);
            first = false;
        }
        else {
            Acsendant = false;

        }
        prew = num;

    }
    if (Acsendant) {
        cout << " Yes " << numLine << endl;
    }
    else cout << "No" << endl;



}

