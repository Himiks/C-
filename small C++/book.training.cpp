#include <iostream>
using namespace std;
enum Yourscards
{
    Age = 43,
    Jack,
    Queen,
    King
};
int main()
{
    cout << "Yourcards and their values " << endl;
    cout << "Age " << Age << endl;
    cout << "Queen " << Queen << endl;
    cout << "King " << King << endl;
    Yourscards cards = Queen;
    cout << "cards " << cards << endl;
    return 0;
}
