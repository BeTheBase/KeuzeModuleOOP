#pragma once
#include <iostream>
#include <vector>
#include "Cell.h";
class Grid
{
private:
	 const int size;
	 int dimRow, dimCol;
	 std::vector<Cell> cells;
public:
	Grid(int size, int DimRow, int DimCol, std::vector<Cell> Cells);
	~Grid();
	virtual void drawGrid(char token);
	virtual int getSize();
	void setNeighBors();
	State* getCellState(int row, int col);
};

