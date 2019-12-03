#include "Cell.h"
#include "State.h";
#include "Alive.h";
#include <typeinfo>  //for 'typeid' to work  
#include "Dead.h";
Cell::Cell(State* state, int row, int col) : state(state), Row(row), Col(col)
{
	neighBors = std::vector<Cell>();
	regenerate();
}

Cell::~Cell()
{
}

void Cell::regenerate()
{
	int livingNeighBors = 0;
	for (Cell cell : neighBors)
	{
		if (cell.state->GetStateType())
		{
			livingNeighBors += 1;
		}
	}
	for (Cell cell : neighBors)
	{
		if (cell.state->GetStateType())
		{
			//Cells die when there are les than 2 or more than 3 neighbors
			if (livingNeighBors < 2 || livingNeighBors > 3)
			{
				int newRow = cell.Row;
				int newColl = cell.Col;
				State* newState = new Dead();
				Cell newCell = Cell(newState, newRow, newColl);

				neighBors.push_back(newCell);
			}
			else
			{
				//otherwise they live 
				int newRow = cell.Row;
				int newColl = cell.Col;
				State* newState = new Alive();
				Cell newCell = Cell(newState, newRow, newColl);

				neighBors.push_back(newCell);
			}
			if (livingNeighBors == 3)
			{
				//Reborn
				int newRow = cell.Row;
				int newColl = cell.Col;
				State* newState = new Alive();
				Cell newCell = Cell(newState, newRow, newColl);

				neighBors.push_back(newCell);
			}
			else
			{
				//Stay dead
				int newRow = cell.Row;
				int newColl = cell.Col;
				State* newState = new Dead();
				Cell newCell = Cell(newState, newRow, newColl);

				neighBors.push_back(newCell);
			}
		}
	}
}
