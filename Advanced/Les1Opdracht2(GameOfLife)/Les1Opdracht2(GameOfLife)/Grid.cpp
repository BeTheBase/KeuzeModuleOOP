#include "Grid.h"
#include <iostream>;
#include <vector>
#include <iostream>
#include <stdint.h>
#include <fstream>
#include <list>
#include <algorithm>
#include "Alive.h";

Grid::Grid(int size, int DimRow, int DimCol, std::vector<Cell> Cells) : size(size), dimRow(DimRow), dimCol(DimCol), cells(Cells)
{
}

Grid::~Grid()
{
}

State* Grid::getCellState(int row, int col)
{
	vector<Cell>::iterator it = find_if(cells.begin(), cells.end(), [&](const Cell & s) {
		return s.Row == row && s.Col == col;
		});
	if (it != cells.end())
	{
		if (&it != nullptr)
		{
			Cell cell = (*it);
			return cell.state;
		}
	}
	else
	{
		return new Alive();
	}
}

void Grid::setNeighBors()
{
	for (Cell item : cells)
	{
		// neighbor in same row - Left
		if (item.Col > 0)
		{
			int row = item.Row;
			int col = item.Col - 1;
			State* state = getCellState(item.Row, item.Col - 1);
			item.neighBors.push_back(Cell(state, row,  col));
		}

		// neighbor in same row - Right    
		if (item.Col < dimCol - 1)
		{
			int row = item.Row;
			int col = item.Col + 1;
			State* state = getCellState(item.Row, item.Col + 1);
			item.neighBors.push_back(Cell(state, row, col));
		}

		// neighbors in same col - Above
		if (item.Row > 0)
		{
			int row = item.Row-1;
			int col = item.Col;
			State* state = getCellState(item.Row-1, item.Col);
			item.neighBors.push_back(Cell(state, row, col));
		}

		// neighbors in same col - Below
		if (item.Row < dimRow - 1)
		{
			int row = item.Row+1;
			int col = item.Col;
			State* state = getCellState(item.Row+1, item.Col);
			item.neighBors.push_back(Cell(state, row, col));
		}

		// neighbor diagonal - Left Above
		if (item.Row > 0 && item.Col > 0)
		{
			int row = item.Row-1;
			int col = item.Col - 1;
			State* state = getCellState(item.Row-1, item.Col - 1);
			item.neighBors.push_back(Cell(state, row, col));
		}

		// neighbor diagonal - Right above
		if (item.Row > 0 && item.Col < dimCol - 1)
		{
			int row = item.Row-1;
			int col = item.Col + 1;
			State* state = getCellState(item.Row-1, item.Col + 1);
			item.neighBors.push_back(Cell(state, row, col));
		}

		// neighbor diagonal - Left Below
		if (item.Row < dimRow - 1 && item.Col>0)
		{
			int row = item.Row+1;
			int col = item.Col - 1;
			State* state = getCellState(item.Row+1, item.Col - 1);
			item.neighBors.push_back(Cell(state, row, col));
		}

		// neighbor diagonal - Right Below
		if (item.Row < dimRow - 1 && item.Col < dimCol - 1)
		{
			int row = item.Row+1;
			int col = item.Col + 1;
			State* state = getCellState(item.Row+1, item.Col + 1);
			item.neighBors.push_back(Cell(state, row, col));
		}
	}
}

void Grid::drawGrid(char token)
{
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			if (cells[x].state->GetStateType())
			{
				cout << token;
			}
			else
			{
				cout << "  ";
			}
			if (y == size - 1)
			{
				cout << endl;
			}
		}
	}

	//bool gridOne[25 + 1][25 + 1] = {}; we need this as input (I don't know how) 
	/*
	for (int a = 1; a < size; a++)
	{
		for (int b = 1; b < size; b++)
		{
			if (gridOne[a][b] == true)
			{
				std::cout << token;
			}
			else
			{
				std::cout << ".";
			}
			if (b == size - 1)
			{
				std::cout << std::endl;
			}
		}
	}*/
}

int Grid::getSize()
{
	return size;
}
