#include "grid.h"
#include<iostream>
#include "Colors.h"


Grid::Grid() {
	numRows = 20;
	numColums = 10;
	cellSize = 30;
	Initialize();
	colors = GetCellColors();
}


void Grid::Initialize() {
	for (int row = 0; row < numRows; row++) {
		for (int column = 0; column < numColums; column++) {
			grid[row][column] = 0;
		}
	}
}

void Grid::Print() {
	for (int row = 0; row < numRows; row++) {
		for (int column = 0; column < numColums; column++) {
			std::cout << grid[row][column] << " ";
		}
		std::cout << std::endl;
	}
}


void Grid::Draw() {
	for (int row = 0; row < numRows; row++) {
		for (int column = 0; column < numColums; column++) {
			int cellValue = grid[row][column];
			DrawRectangle(column * cellSize+1, row * cellSize+1, cellSize-1, cellSize-1, colors[cellValue]);
		}
	}
}


bool Grid::isCellOutside(int row, int column) {
	if (row >= 0 && row < numRows && column >= 0 && column < numColums) {
		return false;
	}
	else {
		return true;
	}
}