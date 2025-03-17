#include<iostream>
#include<conio.h>
#include<Windows.h>

using namespace std;


enum Direction{STOP = 0, LEFT, RIGHT, UP, DOWN};
Direction dir;
bool gameOver;
const int height = 20;
const int width = 20;
int headX, headY, fruitX, fruitY, score;
int tailx[100], taily[100];
int tail_len;

void setup();
void draw();
void input();
void logic();



int main() {
	char start;
	cout << "\t-------------------------------" << endl;
	cout << "\t\t :Snake" << endl;
	cout << "\t-------------------------------" << endl;
	cout << "Press 's' to start: ";
	cin >> start;
	if (start == 's') {
		setup();
		while (!gameOver) {
			draw();
			//input();
			//logic();
			Sleep(30);
			system("cls");
			gameOver = true;
		}
	}


}


void setup() {
	gameOver = false;
	dir = STOP;
	headX = width / 2;
	headY = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;


}

void draw() {
	system("cls");

	cout << "\t\t";
	for (int i = 0; i < width - 8; i++) {
		cout << "||";
	}
	cout << endl;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0) {
				cout << "\t\t||";
			}
			if (i == headY == j == headX) {
				cout << "O";
			}
			else if (i == fruitY && j == fruitX) {
				cout << "*";
			}
			else {
				bool print = false;
				for (int k = 0; k < tail_len; k++) {
					if (tailx[k] == j && taily[k] == i) {
						cout << "o";
						print = true;
					}
				}
				if (!print) {
					cout << "";
				}
			}
			if (j == width-1) {
				cout << "\t\t||";
			}
		}
		cout << endl;
		cout << "\t\tScore: " << score << endl;
	}


	cout << "\t\t";
	for (int i = 0; i < width - 8; i++) {
		cout << "||";
	}


}