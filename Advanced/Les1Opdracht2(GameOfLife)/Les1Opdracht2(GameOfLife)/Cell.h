#pragma once
#include "State.h";
#include <iostream> 
#include <vector>
using namespace std;
class Cell
{
private:
public:
	State* state;
	std::vector<Cell> neighBors;
	Cell(State* state, int row, int col);
	~Cell();
	int Row;
	int Col;
	void regenerate();
};

