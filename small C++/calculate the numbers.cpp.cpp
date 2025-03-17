#include <iostream>
using namespace std;
int main() 
{
    int a;
    int count = 0;
    int sum = 0;
    cout << "Enter a numbers " << endl;
    cin >> a;
    while (a !=0) {
        count++; 
        sum += a;
        cin >> a;

    }
    cout << "The sum is " << sum << endl;
    cout << "The count is  " << count << endl;
    cout << "The evarage numbers is " << double(sum) / count << endl;
   

}

