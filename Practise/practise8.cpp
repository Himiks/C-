/* #include<iostream>
using namespace std;
int main()
{
	const int ARRAY1_LEN = 3;
	const int ARRAY2_LEN = 2;
	int myNums1[ ARRAY1_LEN ] = { 35, -3, 0 };
	int myInts2[ARRAY2_LEN] = { 20, -1 };
	for (int index1 = ARRAY1_LEN - 1; index1 >= 0; index1--)
		for (int index2 = ARRAY2_LEN - 1; index2 >= 0; index2--)
			cout << myNums1[index1] + myInts2[index2] << endl;
}*/

/* #include <iostream>
using namespace std;
int main()
{
    cout << "\n\n Find the perfect numbers between 1 and 500:\n";
    cout << "------------------------------------------------\n";
    int i = 1, u = 1, sum = 0;
    cout << "\n The perfect numbers between 1 to 500 are: \n";
    while (i <= 10)
    {
        while (u <= 10)
        {
            if (u < i)
            {
                if (i % u == 0)
                    sum = sum + u;
            }
            u++;
        }
        if (sum == i) {
            cout << i << "  " << "\n";
        }
        i++;
        u = 1;
        sum = 0;
    }
}*/

/* #include <iostream>
using namespace std;
int main()
{
    int num1, ctr = 0;
    cout << "Enter a number " << endl;
    cin >> num1;
    for (int a = 1; a <= num1; a++) {
        if (num1 % a == 0)
        {
            ctr++;
        }
    }
    if (ctr == 2)
    {
        cout << "The entered number" << num1 << " is a prime "<<  endl;
   }
    else {
        cout << "The entered number" << num1 << " is not a prime " << endl;
    }
}*/



/*#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int num1, num2;
    int fnd = 0, ctr = 0;
    cout << "Enter a number for strarting range : " ;
    cin >> num1;
    cout << "Enter a number for ending range : ";
    cin >> num2;
    cout << "The prime numbers between " << num1 << " and " << num2 << " are : " << endl;
    for (int i = num1; i <= num2; ++i) {
        for (int j = 2; j <= sqrt(i); j++ ) {
            if (i % j == 0)
                ctr++;
        }
        if (ctr == 0 && i != 1)
        {
            fnd++;
            cout << i << endl;
        }
        ctr = 0;
    }
    cout << num1 << " and " << num2 << " is " << fnd << endl;

}*/

	

/*#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int  heigth;
    int width;
    cout << "Enter a height " << endl;
    cin >> heigth;
    cout << "Enter a width " << endl;
    cin >> width;
    for (int j = 0; j < heigth; j++)
    {

        for (int i = 0; i < width; i++)
        {

            cout << "*";
        }
        cout << endl;
    }
   
    

}*/


/*#include <iostream>
using namespace std;
int main()
{
    int lines = 0;
    int symbInLines = 0;
    char symbol = 0;
    cout << "Enter a symbol " << endl;
    cin >> symbol;
    cout << "Enter number of lines " << endl;
    cin >> lines;
    cout << "Enter number of symbols " << endl;
    cin >> symbInLines;
    for (int i = 1; i <= lines; i++) {

        if (i == 1 || i == lines) {
            for (int j = 1; j <= symbInLines; j++) {
                cout << symbol;
            }
        }
        else {
            cout << symbol;
            for (int j = 1; j <= symbInLines - 2; j++) {
                cout << " ";
            }
            cout << symbol;
        }
        cout << endl;
    }
    cout << endl;
    return 0;

     
}*/

            
        
    
 /*#include <iostream>
using namespace std;
int main()
{
    for (int f = 2; f <= 12; f++) {
        for (int s = 1; s <= 12; s++) {
            cout << f << " * " << s << " = " << f * s;
           cout << endl;
        }
        cout << endl;

    }
    cout << endl;
    return 0;

}*/

/*#include <iostream>
#include<cmath>
using namespace std;
int main()
{
 int num1;
 int fact = 1;
 cout << "Enter a number " << endl;
 cin >> num1;
 for (int i = 1; i <= num1; i++) {
     fact *= i;
 }
 cout << fact << endl;

}*/


/*#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int range;
    cout << "Enter a range " << endl;
    cin >> range;
    int num1 = 0, num2 = 1;
    char wantMore = '\0';
    do {
        for (int counter = 0; counter < range; counter++) {
            cout << num1 + num2 << " ";
            int num2Temp = num2;
            num2 = num1 + num2;
            num1 = num2Temp;
        }
        cout << endl << "Continue (y/n) ? : ";
        cin >> wantMore;

    } while (wantMore == 'y');
    cout << "Bye!" <<  endl;
}*/

/*#include <iostream>
#include<cmath>
using namespace std;
int main()
{

    enum Colors {
        Violet = 0,
        Indigo,
        Blue,
        Green,
        Yellow,
        Orange,
        Red, 
        Crimson,
        Beige,
        Brown,
        Peach,
        Pink,
        White,
    };
     
    int YourChoice;
    cin >> YourChoice;
    switch (YourChoice) {
    case Violet:
    case Indigo:
    case Blue:
    case Green:
    case Yellow:
    case Red:
        cout << "Entered color is in rainboul " << endl;
        break;
    default: 
        cout << "There is no color " << endl;
        break;

    }
    return 0;

}*/


