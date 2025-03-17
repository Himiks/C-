#include<raylib.h>
#include "game.h"
#include <ctime>  // Для std::time
#include <cstdlib>


int main() {
	std::srand(static_cast<unsigned>(std::time(nullptr)));
	InitWindow(300, 600, "raylib Tetris"); // initiate window
	SetTargetFPS(60); // the game speed
	Color darkBlue = { 44, 44, 127, 255 };
	
	Game game = Game();
	

	while(WindowShouldClose() == false) { // check if user enter escape or close the window returns true if so
		game.HandleInput();
		BeginDrawing(); // drow canvas
		ClearBackground(darkBlue); // color of the background
		game.Draw();
		EndDrawing(); // end drowing canvas

	}

	CloseWindow(); // close window

}