/*#include <iostream>
#include<string>
using namespace std;

class Human {
public:
    string name;
    int age;

    void IntriduceSelf() {
        cout << "I'm " + name << " and I'm ";
        cout << age << " years old " << endl;
    }
};

int main()
{
    Human firstMan;
    firstMan.name = "Adam";
    firstMan.age = 30;

    Human firstWoman;
    firstWoman.name = "Eva ";
    firstWoman.age = 28;

    firstMan.IntriduceSelf();
    firstWoman.IntriduceSelf();
}*/






/*#include <iostream>
#include<string>
using namespace std;

class Human {
private:
    int age;

public:
    void SetAge(int inputAge) {
        age = inputAge;
    }

    int  GetAge() {

        if (age > 30)
            return (age - 2);
        else
            return age;

    }
};


int main() {
    Human firstMan;
    firstMan.SetAge(35);

    Human firstWoman;
    firstWoman.SetAge(22);

    cout << "Age of firstMan " << firstMan.GetAge() << endl;
    cout << "Age of firstWoman " << firstWoman.GetAge() << endl;


}*/





/*#include <iostream>
#include<string>
using namespace std;

class Date {
    int dd = 1;
    int mm = 1;
    int yyyy = 1900;
public:
    Date(int d, int m, int y) {
        dd = d;
        mm = m;
        yyyy = y;
    }
    Date() {

    }

    ~Date() {
        cout << "Date is clened " << endl;
    }

    void next() {
        dd++;
        if (dd > 31) {
            dd = 1;
            mm ++ ;
            if (mm > 12) {
                mm = 1;
                yyyy++;
            }
        }
        

    }



};


int main() {
    Date dd;
    Date dd(11, 12, 2023);

    Date dx;
    dx = dd;
    dd.next();


}*/



/*#include <iostream>
#include<string>
using namespace std;

class Human {
public:
    int age;
    int weight;
    string name;

    void Print() {
        cout << "Name: " << name << " " << "weight: " << weight << " " << "Age " << age << endl;
    }


};


int main() {

    Human firstHuman;
    firstHuman.name = "Adam";
    firstHuman.age = 30;
    firstHuman.weight = 75;

    firstHuman.Print();
}*/








/*#include <iostream>
#include<string>
using namespace std;

class Point {
public:
    int x;

    void Print() {
        cout << "Y = " << y << " " << "X = " << x << " " << "Z = " << z << endl;
        PrintY();
    }

private:
    int z;
    int y;
    void PrintY() {
        cout << y << endl;
    }
};


int main() {
    Point a;
    a.Print();
    


}*/





#include <iostream>
#include<string>
using namespace std;
int main() {
    int first =0;
    int second=0;
    int third=0;
    const int K = 3;
    const int R = 3;
    int arr[R][K] = { {1,22,11}, {3,7,6}, {8,40,5} };
    
    
    
    for (int i = 0; i < R; i++) {
        first += arr[i][0];
    }
    for (int i = 0; i < R; i++) {
        second += arr[i][1];
    }
    for (int i = 0; i < R; i++) {
        third += arr[i][2];
    }

    if (first > second || first > third) {
        cout << "Answer is: " << 1 <<"The sum of the column 1 is the biggest " << << endl;
    }

    else if (second > first || second > third) {
        cout << "Answer is: " << 2 << endl;
    }

    else
        cout << "Answer is: " << 3 << endl;






}