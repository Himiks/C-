#pragma once


#include<fstream>
#include<string.h>
#include<string>
#include<Windows.h>
#include<stdlib.h>
#include<vector>
#include <sstream>

using namespace std;

void addData(void);
void viewData(void);
void mainMenu(void);
void deleteData(void);
void adminVerification(void);
void studentFunction(void);


void adminFunction() {
    system("cls");
    cout << "\n\n\t\t\t\t\t | Logged In as Admin |\n";
    cout << "\n\n\t\t\t\t\t 1. Add Students Detail";
    cout << "\n\n\t\t\t\t\t 2. Delete Students";
    cout << "\n\n\t\t\t\t\t 3. update Record";
    cout << "\n\n\t\t\t\t\t 4. View Table ";
    cout << "\n\n\t\t\t\t\t 5. Main Menu ";
    cout << "\n\n\t\t\t\t\t 6. Exit";



    int option;
    cout << "\n\n\t\t\t\t\tEnter choice : ";
    

    do
    {
        cin >> option;

        {
            switch (option)
            {

            case 1:
                addData();
                break;

            case 2:
                deleteData();
                break;

            case 3:
                cout << "this option is not available"; //updateData();
                break;

            case 4:
                viewData();
                break;

            case 5:
                mainMenu();
                break;

            case 6:
                system("cls");
                cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";

                for (int i = 0; i < 4; i++)
                {

                    Sleep(1000);
                    cout << ".";
                }
                exit(0);
                break;

            default:
                system("cls");
                cout << "\n\n\t\t\t\t\t Logged In as Admin";
                cout << "\n\n\t\t\t\t\t 1. Add Students Record";
                cout << "\n\n\t\t\t\t\t 2. Delete Record";
                //  cout << "\n\n\t\t\t\t\t 3. update Record";
                cout << "\n\n\t\t\t\t\t 4. View Table ";
                cout << "\n\n\t\t\t\t\t 5. Main Menu ";
                cout << "\n\n\t\t\t\t\t 6. Exit";

                cout << "\n\n\t\t\t\t\t invalid input!";

                cout << "\n\n\t\t\t\t\t Enter choice : ";
            }
        }

    } while (option != '6');
}





void mainMenu() {
    system("cls");

    cout << "\n\n\n\n\t\t\t\t\t Login As : ";
    cout << "\n\n\n\t\t\t\t\t 1. Admin ";
    cout << "\n\n\t\t\t\t\t 2. Student";
    cout << "\n\n\t\t\t\t\t 3. Exit";
    cout << "\n\n\n\t\t\t\t\t Enter your choice : ";

    int choice;

    cin >> choice;
    switch (choice) {
    case 1:
        adminVerification();
        break;

    case 2:
        system("cls");

        cout << "Welcom as Student";
        studentFunction();
        break;

   
    case 3:
        system("cls");
        cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";

        for (int i = 0; i < 4; i++)
        {

            Sleep(1000);
            cout << ".";
        }

        exit(0);
        break;




    default:
        cout << "invalid input";

    }
    system("pause");


}


void deleteData() {
    system("cls");
    fstream fin, fout;

    fin.open("data.csv", ios::in);
    fout.open("datanew.csv", ios::out);
    int rollnum, roll, marks, count = 0, i;
    char sub;
    string line, word;

    vector<string> row;

    cout << "Enter the roll number "
        << "of the record to be deleted: ";
    cin >> rollnum;

    while (!fin.eof()) {
        row.clear();

        getline(fin, line);
        stringstream s(line);

        while (getline(s, word,',')) {
            row.push_back(word);
        }

        int row_size = row.size();
        roll = stoi(row[0]);


        if (roll != rollnum) {
            if()
        }



    }





}