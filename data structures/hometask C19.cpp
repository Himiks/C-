/*Given natural number n and array with non-negative integers A(n). Find an index of the element for which the sum of elements before has the
minimum difference form sum of elements after the element. If there are several elements with this characteristic, show all of them.
*/


#include<iostream>
#include<cmath>
using namespace std;
int main() {



    char choice = 'y';
    while (choice == 'y' || choice == 'Y') {  // while choice = y the program will be repeated
        int n; // size of the array
        cout << "Please enter the size of the array :" << endl;
        cin >> n;
        while (n < 3) {   // while value less than 3 the program will ask for repeated input because it is impossible to user array with size 3 in this program
            cout << "Incorrect value array size should be at least 3. Please try again : ";
            cin >> n;
        }

        int arr[n]; // array where numbers are saved
        cout << "Enter numbers to fill the array :" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            while (arr[i] < 0) { // values int the array can't be less than 0
                cout << "Incorrect value, the values in the array can't be less then 0. Please try again :" << endl;
                cin >> arr[i];
            }
        }


        int total = 0; // the total amount of numbers

        for (int i = 0; i < n; i++) {
            total += arr[i];
        }



        int sumbefore; // variable for the sum of numbers before to find the sum between them
        int sumafter; // variable for the sum of numbers before to find the sum between them

        sumbefore = 0; // assignment for correct calculations
        sumafter = total - arr[0]; // assignment for correct calculations


        int Min_index = 0; // variable for counting the minimum values in the array
        int mindiff = INT_MAX; // variable for finding the minimum value when comparing the numbers
        int Min_arr[n]; // array for keeping the minimum values


        for (int i = 1; i < n - 1; i++) { // calculation the sum before and after
            sumbefore += arr[i - 1];
            sumafter -= arr[i];

            int  actdiff = abs(sumbefore - sumafter); // calculation of actual difference. We use abs because to calculate the absolute value between two values When we are looking for the minimum difference, it does not matter to us which side of the original element has more sum. We find the element for which the difference between the sums on the left and the right is minimal in absolute value.
            if (actdiff < mindiff) { // comparison the actual value and minimal difference if actual less we assign actual to minimum difference
                mindiff = actdiff;
                Min_index = 0; // counter of indices
                Min_arr[Min_index++] = i; // array for saving the indices
            }
            else if (actdiff == mindiff) { // if the values equal then adding it to array
                Min_arr[Min_index++] = i;
            }

        }
        if (Min_index == 0) { // if counter = 0. There is no min values
            cout << "There is no minimum index " << endl;
        }
        else { // otherwise there are some or one indices
            cout << "Founded indices with minimum difference : " << endl;
            for (int i = 0; i < Min_index; i++) {
                cout << Min_arr[i] << " ";
            }
            cout << endl;
        }
        cout << "Would you like to try again? If yes input 'y', otherwise input 'n' " << endl; // program asks if user wants to repeat the execution
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            return 0;
        }
    }





}
