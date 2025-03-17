#include <iostream>
using namespace std;

int main()
{
    int n, speed;
    cin >> n >> speed;
    string way;
    cin >> way;

    for (int i = 0; i < way.length() - 1; i++)
    {

          if (way[i] == '/' && way[i + 1] == '\\')
         {
             while (speed > 1)
             {
                 if (i + speed >= way.length() || way[i + speed] == '\\')
                 {
                     i = speed + i;
                     break;
                 }
                 else
                 {
                     speed--;
                 }
             }
        }
        else if (way[i] == '\\')
        {
            speed++;
        }

        else if (i > 0 && (way[i] == '/' && way[i - 1] == '\\'))
        {
            speed++;
        }
        else if(i > 0 && (way[i] == '/' && way[i - 1] == '/')){
            speed++;
        }


       
        else {
            speed++;
        }

    }
    cout << speed << endl;
}

