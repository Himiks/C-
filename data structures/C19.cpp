#include<iostream>
#include<cmath>
using namespace std;
int main() {



    char choice = 'y';
    while (choice == 'y' || choice =='Y') {
        int n;
        cout << "Please enter the size of the array :" << endl;
        cin >> n;
            while (n < 3) {
                cout << "Incorrect value array size should be at least 3. Please try again : ";
                 cin >> n;
            }



        int arr[n];
        int Min_index = 0;
        int mindiff = INT_MAX;
        int Min_arr[n];
        int sumbefore;
        int sumafter;
        int total = 0;
        int actdiff;


        cout << "Enter numbers to fill the array :" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] < 0) {
                cout << "Incorrect value, the values in thee array can't be less then 0. Please try again :" << endl;
                cin >> arr[i];
            }
        }
        for (int i = 0; i < n; i++) {
            total += arr[i];
        }

        sumbefore = 0;
        sumafter = total - arr[0];

        for (int i = 1; i < n - 1; i++) {
            sumbefore += arr[i - 1];
            sumafter -= arr[i];

            actdiff = abs(sumbefore - sumafter);
            if (actdiff < mindiff) {
                mindiff = actdiff;
                Min_index = 0;
                Min_arr[Min_index++] = i;
            }
            else if (actdiff == mindiff) {
                Min_arr[Min_index++] = i;
            }

        }
        if (Min_index == 0) {
            cout << "There is no minimum index " << endl;
        }
        else {
            cout << "Fonded indices with minimum difference : " << endl;
            for (int i = 0; i < Min_index; i++) {
                cout << Min_arr[i] << " ";
            }
            cout << endl;
        }
        cout << "Would you like to try again? If yes input 'y', otherwise input 'n' " << endl;
        cin >> choice;
       if (choice != 'y' && choice != 'Y'){
       return 0;
       }
    }





}
