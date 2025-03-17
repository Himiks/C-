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






/*#include <iostream>
#include<string>
using namespace std;

class Point {
private:
    int x;
    int y;
public:

    int GetY() {
        return y;
    }

    void SetY(int valueY) {
        y = valueY;
    }



    int GetX() {
        return x;
    }

    void SetX(int valueX) {
        x = valueX;
    }
    void Print() {
        cout << "X = " << x << " " << "Y = " << y << endl;
    }
};


int main() {
    Point a;
    a.SetX(22);
    //  a.Print();
    int result = a.GetX();
    cout << result << endl;
    a.SetY(32);
    int ans = a.GetY();
    cout << ans << endl;


}*/






/*#include <iostream>
#include<string>
using namespace std;

class Human {
private:
    string name;
    int age;
public:
    Human() {
        age = 0;
        cout << "Constructing the object Human " << endl;
    }
    void Setname(string humanName) {
        name = humanName;

    }
    void SetAge(int humanAge) {
        age = humanAge;

    }

    void IntriduceSelf() {
        cout << "I'm " + name << "and I'm ";
        cout << age << " years old " << endl;
    }


};


int main() {
    Human firstWoman;
    firstWoman.Setname("Eva ");
    firstWoman.SetAge(28);
    firstWoman.IntriduceSelf();


}*/




/**#include <iostream>
#include<string>
using namespace std;

class Human {
private:
    string name;
    int age;
public:
    Human() {
        age = 0;
        cout << "Constructing the object Human " << endl;
    }
    Human(string humansName, int humansAge) {
        name = humansName;
        age = humansAge;
        cout << "Overload constructor created " << endl;
        cout << name << " " << age << endl;

    }





};


int main() {
    Human firstMan;
    Human firstWoman("Eva", 20);


}*/



/*#include <iostream>
#include<string>
using namespace std;

class Human {
private:
    string name;
    int age;
public:
    Human(string humansName, int humansAge) {
        name = humansName;
        age = humansAge;
        cout << "Overload constructor created " << endl;
        cout << name << " " << age << endl;
    }
    void IntriduceSelf() {
        cout << "I'm " + name << " and I'm ";
        cout << age << " years old " << endl;
    }


};

int main() {

    Human firstMan("Adam", 20);
    Human firstWoman("Eva", 19);

    firstMan.IntriduceSelf();
    firstWoman.IntriduceSelf();

}*/



/*#include <iostream>
#include<string>
using namespace std;

class Human {
private:
    string name;
    int age;
public:
    Human(string humansName = "Adam", int humansAge = 25)
        :name(humansName), age(humansAge)
    {
        cout << "Overload constructor created " << endl;
        cout << name << " " << age << endl;
    }
};


    int main() {

        Human firtsMan;
        Human firstWoman("Eva", 18);




    }*/



/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string.h>
using namespace std;

class Mystring {
private:
    char *buffer;
public:
    Mystring(const char* initString) {
        if (initString != nullptr) {
            buffer = new char[strlen(initString) + 1];
            strcpy(buffer, initString);
        }
        else
            buffer = nullptr;
    }
    ~Mystring() {
        cout << "Destructor " << endl;
        if (buffer != nullptr) {
            delete[] buffer;
        }
    }

    int GetLength() {
        return strlen(buffer);
    }
    const char *GetString() {
        return buffer;
    }




};
int main() {
    Mystring sayHello("Hello from String Class");
    cout << "The length of buffer " << endl;
    cout << sayHello.GetLength() << " " << "symbols " << endl;
    cout << "Buffer contains " << sayHello.GetString() << endl;

}*/


/*#include <iostream>
#include<string>
using namespace std;

class Employee {
public:
    string name;
    string company;
    int age;

    void IntroduceSelf() {
        cout << "Name " << name << endl;
        cout << "Company " << company << endl;
        cout << "Age " << age << endl;
    }
    Employee(string Name, string Company, int Age) {
        name = Name;
        company = Company;
        age = Age;

    }


};


int main() {
    Employee employee1 = Employee("Adam", "Google", 25);
    employee1.name = "Adam ";
    employee1.company = "Google";
    employee1.age = 25;
    employee1.IntroduceSelf();

    Employee employee2 = Employee("Eva", "Amazon", 20);
    employee1.name = "Eva ";
    employee1.company = "Google";
    employee1.age = 20;
    employee2.IntroduceSelf();
}*/







/*#include <iostream>
#include<string>
using namespace std;
class AbstractEmployee {
    virtual void AskForPromotion()=0;

};



class Employee:AbstractEmployee {
private:
    string name;
    string company;
    int age;
public:

    void SetName(string Name) {
        name = Name;
    }
    string GetName() {
        return name;
    }
    void SetCompany(string Company) {
        company = Company;
    }
    string GetCompany() {
        return company;
    }
    void SetAge(int Age) {
        if(Age >= 18)
        age = Age;
    }
    int GetAge() {
        return age;
    }

    void IntroduceSelf() {
        cout << "Name " << name << endl;
        cout << "Company " << company << endl;
        cout << "Age " << age << endl;
    }
    Employee(string Name, string Company, int Age) {
        name = Name;
        company = Company;
        age = Age;

    }

    void AskForPromotion() {
        if (age > 30)
            cout << name << "got promoted! " << endl;
        else
            cout << name << " sorry no promotion for you " << endl;
    }
};


class Developer:Employee {
public:
    string FavProgrammingLanguage;
    Developer(string Name, string Company, int Age, string favProgrammingLanguage)
        :Employee(Name, Company, Age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;

    }

    void fixBug() {
        cout << GetName() << " " << "Fixed bug using " << FavProgrammingLanguage << endl;
    }



};


int main() {
   // Employee employee1 = Employee("Adam", "Google", 25);
    //Employee employee2 = Employee("Eva", "Amazon", 20);
 

    Developer d = Developer("Adam", "Google", 25, "C++");
    d.fixBug();

   
}*/


// Inheritance

/*#include <iostream>
#include<string>
using namespace std;
class AbstractEmployee {
    virtual void AskForPromotion()=0;

};



class Employee:AbstractEmployee {
private:
    string company;
    int age;
protected:
    string name;

public:

    void SetName(string Name) {
        name = Name;
    }
    string GetName() {
        return name;
    }
    void SetCompany(string Company) {
        company = Company;
    }
    string GetCompany() {
        return company;
    }
    void SetAge(int Age) {
        if(Age >= 18)
        age = Age;
    }
    int GetAge() {
        return age;
    }

    void IntroduceSelf() {
        cout << "Name " << name << endl;
        cout << "Company " << company << endl;
        cout << "Age " << age << endl;
    }
    Employee(string Name, string Company, int Age) {
        name = Name;
        company = Company;
        age = Age;

    }

    void AskForPromotion() {
        if (age > 30)
            cout << name << "got promoted! " << endl;
        else
            cout << name << " sorry no promotion for you " << endl;
    }
};


class Developer:public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string Name, string Company, int Age, string favProgrammingLanguage)
        :Employee(Name, Company, Age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;

    }

    void fixBug() {
        cout << name << " " << "Fixed bug using " << FavProgrammingLanguage << endl;
    }



};
class Teacher:public Employee {
public:
    string Subject;
    void PrepareLesson() {
        cout << name << " is preparing " << Subject << " lesson " << endl;

    }
    Teacher(string Name, string Company, int Age, string subject)
    :Employee(Name, Company, Age)
    {
        Subject = subject;
    }



};

int main() {
   // Employee employee1 = Employee("Adam", "Google", 25);
    //Employee employee2 = Employee("Eva", "Amazon", 20);


    Developer d = Developer("Adaaam", "Go00ogle", 25, "C++");
    d.fixBug();
    d.AskForPromotion();
    Teacher t = Teacher("Jack", "Cool school", 35, "History");
    t.PrepareLesson();
    t.AskForPromotion();



}*/



// polimorfizm


/*#include <iostream>
#include<string>
using namespace std;
class AbstractEmployee {
    virtual void AskForPromotion() = 0;

};



class Employee :AbstractEmployee {
private:
    string company;
    int age;
protected:
    string name;

public:

    void SetName(string Name) {
        name = Name;
    }
    string GetName() {
        return name;
    }
    void SetCompany(string Company) {
        company = Company;
    }
    string GetCompany() {
        return company;
    }
    void SetAge(int Age) {
        if (Age >= 18)
            age = Age;
    }
    int GetAge() {
        return age;
    }

    void IntroduceSelf() {
        cout << "Name " << name << endl;
        cout << "Company " << company << endl;
        cout << "Age " << age << endl;
    }
    Employee(string Name, string Company, int Age) {
        name = Name;
        company = Company;
        age = Age;

    }

    void AskForPromotion() {
        if (age > 30)
            cout << name << "got promoted! " << endl;
        else
            cout << name << " sorry no promotion for you " << endl;
    }
    virtual void Work() {
        cout << name << " " << " is checking email, task backlog, performing tasks... " << endl;

    }
};


class Developer :public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string Name, string Company, int Age, string favProgrammingLanguage)
        :Employee(Name, Company, Age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;

    }

    void fixBug() {
        cout << name << " " << "Fixed bug using " << FavProgrammingLanguage << endl;
    }
    void Work() {
        cout << name << " " << " is writing  " << FavProgrammingLanguage << " code " << endl;

    }



};
class Teacher :public Employee {
public:
    string Subject;
    void PrepareLesson() {
        cout << name << " is preparing " << Subject << " lesson " << endl;

    }
    Teacher(string Name, string Company, int Age, string subject)
        :Employee(Name, Company, Age)
    {
        Subject = subject;
    }
    void Work() {
        cout << name << " " << " is teaching  " << Subject << " code " << endl;

    }



};

int main() {
    // Employee employee1 = Employee("Adam", "Google", 25);
     //Employee employee2 = Employee("Eva", "Amazon", 20);


    Developer d = Developer("Adaaam", "Go00ogle", 25, "C++");
    Teacher t = Teacher("Jack", "Cool school", 35, "History");
    Employee* e1 = &d;
    Employee* e2 = &t;
    e1->Work();
    e2->Work();

}*/






/*#include<iostream>
using namespace std;
class MyClass {
private:
    int Size;
public:
    int* data;
    MyClass(int size) {
        this->Size = size;
        this->data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = i;
        }



    }

     MyClass& operator = (const MyClass &other) {  // как программа понимает какой обьект передать в other а какой обьеккт очистить и присвоитт ему данные other и почему мы указываем название класса в начале
        cout << "Assignement operator is called " << this << endl;

        this->Size = other.Size;


        if (this->data != NULL) {
            delete[]  this->data;
        }

        this->data = new int[other.Size];
        for (int i = 0; i < Size; i++) {
            this->data[i] = other.data[i];
        }
        return *this;
    }



    ~MyClass() {
        delete[] data;
    }

    MyClass(const MyClass& other) { // Почему мы указывает имя класса как название функции и передаем данные и пишем название класса
        this->data = new int[other.Size];
        for (int i = 0; i < other.Size; i++) {
            data[i] = other.data[i];
        }


    }




};



int main() {
   MyClass a(5);
   MyClass b(10);
   MyClass c(5);

  c = a = b;

    return 0;
}*/



/*#include<iostream>
using namespace std;

class GradeBook {
public:
    string getCourseName() const;

    explicit GradeBook(string name)
        :courseName(name)
    {

    }
    void setCourseName(string name) {
        courseName = name;
    }

   

    void displayMessage() const {
        cout << "Welcome to the grade book for\n" << getCourseName()
            << "!" << endl;
    }

private:
    string courseName;


};

string GradeBook::getCourseName() const {

    return courseName;
}


int main() {

    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " <<
        gradeBook2.getCourseName() << endl;

    gradeBook1.displayMessage();


}*/




/*#include<iostream>
using namespace std;
int main() {
    int currVal = 0, val = 0;
    if (cin >> currVal) {
        int cnt = 1;
        while (cin >> val) {
            if (val == currVal)
                ++cnt;
            else {
                cout << currVal << " occurs " << cnt << " times " << endl;
                currVal = val;
                cnt = 1;
            }
        }
        cout << currVal << " occurs " << cnt << " times " << endl;
    }


    return 0;
}*/














/*#include<iostream>
using namespace std;
class MyClass {
private:
    int Size;
public:
    int* data;
    MyClass(int size) {
        this->Size = size;
        this->data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = i;
        }



    }

    MyClass& operator = (const MyClass& other) {  // как программа понимает какой обьект передать в other а какой обьеккт очистить и присвоитт ему данные other и почему мы указываем название класса в начале
        cout << "Assignement operator is called " << this << endl;

        this->Size = other.Size;


        if (this->data != NULL) {
            delete[]  this->data;
        }

        this->data = new int[other.Size];
        for (int i = 0; i < Size; i++) {
            this->data[i] = other.data[i];
        }
        return *this;
    }

    ~MyClass() {
        delete[] data;
    }

    MyClass(const MyClass& other) { // Почему мы указывает имя класса как название функции и передаем данные и пишем название класса
        this->data = new int[other.Size];
        for (int i = 0; i < other.Size; i++) {
            data[i] = other.data[i];
        }


    }
};


int main() {
    MyClass a(5);
    MyClass b(10);
    MyClass c(5);

    MyClass f(b);
    c = a = b;

    return 0;
}*/




/*#include<iostream>
using namespace std;
class Point {

private:
    int x;
    int y;
public:
    Point(int valueX, int valueY)
        : x(valueX), y(valueY)
    {
        cout << "Constructor " << this << endl;
    }

    bool operator ==(const Point &other) {

        return this->x == other.x && this->y == other.y;
        

    }



};*/






/*#include<iostream>
using namespace std;


class Enemy {
public:
    Enemy();
    void Attack() const;
protected:
    int m_Damage;

};
Enemy::Enemy() :
    m_Damage(10)
{}

void Enemy::Attack() const {
    cout << "Attack inflicts " << m_Damage << " damage points!\n";

}
class Boss : public Enemy {
public:
    Boss();
    void SpecialAttack();
private:
    int m_DamageMultiplier;

};

Boss::Boss() :
    m_DamageMultiplier(3)
{}
void Boss::SpecialAttack() {
    cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
    cout << " damage points!\n";
}

int main() {
    cout << "Creating an enemy\n";
    Enemy enemy1;
    enemy1.Attack();
    cout << "\nCreating a boss\n";
    Boss boss1;
    boss1.Attack();
    boss1.SpecialAttack();
    return 0;




}


int main() {
    Point a(5, 7);
    Point b(9, 4);

    bool result = a == b;
   


}*/





/*#include<iostream>
#include<iomanip>
#include<stdexcept>
using namespace std;

class  Time {
public:
    Time();
    void setTime(int, int, int);
    void printUniversal()const;
    void printStandard()const;
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

};

Time::Time() :
    hour(0), minute(0), second(0)
{}

void Time::setTime(int h, int m, int s) {
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) &&
        (s >= 0 && s < 60)) {

        hour = h;
        minute = m;
        second = s;
    }
    else {
        throw invalid_argument("hour, minute and/or second was out of range");

    }

}

void Time::printUniversal() const {
    cout << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":" << setw(2) << second;

}

void Time::printStandard() const{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
        << setfill('0') << setw(2) << minute << ":" << setw(2)
        << second << (hour < 12 ? " AM " : " PM ");

}

int main() {
    Time t;
   int result = 11 % 12;
    


    t.printStandard();
    cout << endl;
    t.printUniversal();
    cout << endl;

    t.setTime(11, 27, 6);
    t.printUniversal(); 
    cout << endl;
    t.printStandard();
    cout << endl;


    try {
        t.setTime(99, 99, 99);
    }
    catch (invalid_argument& e) {
        cout << "Exception " << e.what() << endl;
    }
    t.printUniversal();
    cout << endl;
    t.printStandard();





}*/





/*#include<iostream>
#include<iomanip>
#include<stdexcept>
using namespace std;

class  Time {
public:
    explicit Time(int = 0, int = 0, int = 0);
    void setTime(int, int, int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    unsigned int getHour()const;
    unsigned int getMinute()const;
    unsigned int getSecond()const;


    void printUniversal()const;
    void printStandard()const;
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

};
Time::Time(int hour, int minute, int second) {
    setTime(hour, minute, second);
}

void Time::setTime(int h, int m, int s) {
    setHour(h);
    setMinute(m);
    setSecond(s);

}


void Time::setHour(int h) {
    if (h >= 0 && h < 24) {
        hour = h;
    }
    else {
        throw invalid_argument("hour must be 0-23");
    }

}


void Time::setMinute(int m) {
    if (m >= 0 && m < 60) {
        minute = m;
    }
    else {
        throw invalid_argument("minute must be 0-59");
    }
}


void Time::setSecond(int s) {
    if (s >= 0 && s < 60) {
        second = s;
    }
    else {
        throw invalid_argument("second must be 0 - 59");
    }
}



unsigned int Time::getHour()const {
    return hour;
}


unsigned int Time::getMinute()const {
    return minute;
}


unsigned int Time::getSecond()const {
    return second;
}


void Time::printUniversal() const {
    cout << setfill('0') << setw(2) << getHour() << ":"
        << setw(2) << getMinute() << ":" << setw(2) << getSecond();

}

void Time::printStandard() const {
    cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":"
        << setfill('0') << setw(2) << minute << ":" << setw(2)
        << getSecond() << (hour < 12 ? " AM " : " PM ");

}

int main() {
    Time t1;
    Time t2(2);
    Time t3(21,34);
    Time t4(12, 25, 42);
    t1.printUniversal();
    cout << endl;
    t1.printStandard();
    cout << endl;

    t2.printUniversal();
    cout << endl;
    t2.printStandard();
    cout << endl;


    t3.printUniversal();
    cout << endl;
    t3.printStandard();
    cout << endl;


    t4.printUniversal();
    cout << endl;
    t4.printStandard();
    cout << endl;


    try {
        Time t5(27, 74, 99);
    }
    catch(invalid_argument &e){
        cerr << "\n\nException while initializing t5: " << e.what() << endl;

    }

}*/







/*#include<iostream>
#include<string>
using namespace std;
class CreateAndDestroy {
public:
    CreateAndDestroy(int, string);
    ~CreateAndDestroy();
private:
    int objectID;
    string message;
};

CreateAndDestroy::CreateAndDestroy(int ID, string messageString) :
    objectID(ID), message(messageString)
{
    cout << objectID << " " << message << endl;
}
CreateAndDestroy::~CreateAndDestroy() {
    cout << (objectID == 1 || objectID == 6 ? "\n" : "");
    cout << objectID << message << "destructor"<< endl;
}

void create(void);
CreateAndDestroy firts(1, "(global before main)");


int main() {

    CreateAndDestroy second(2, "(local automatic in main)");
    static CreateAndDestroy third(3, "(local static in main)");
    create();
    CreateAndDestroy forth(4, "(local automatic in main)");

  
}

void create(void) {
    CreateAndDestroy fifth(5, "(local automatic in create)");
    static CreateAndDestroy sixth(6, "(local static in create)");
    CreateAndDestroy seventh(7, "(local automatic in create)");


}*/




/*#include<iostream>
using namespace std;

class Date {
public:
    explicit Date(int = 1, int = 1, int = 2000);
    void print();
private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

};

Date::Date(int m, int d, int y):
    month(m), day(d), year(y)
{}


void Date:: print() {
    cout << month << '/' << day << '/' << year;
}

int main() {
    Date date1(7, 4, 2004);
    Date date2;
    
    date1.print();
    cout << endl;
    date2.print();
    cout << endl;

    date2 = date1;
    date2.print();
    cout << endl;




}*/




#include<iostream>
using namespace std;

class Apple {

    
public:

    static int Count;
    Apple(int weight, string color) {
        this->weight = weight;
        this->color = color;
        Count++;
        id = Count;
    }
    int GetId() {
        return id;
    }

private:
    int weight;
    string color;
    int id;

};

int Apple::Count = 0;


int main() {

    Apple apple(150, "Red");
    Apple apple2(100, "Green");
    Apple apple3(200, "Yellow");
    cout << apple.GetId()<< endl;
    cout << apple2.GetId() << endl;
    cout << apple3.GetId() << endl;



}
