#include "Grid.h";
#include <iostream>;
#include <stdlib.h>     /* srand, rand */
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include "Alive.h";
#include "Dead.h";

const int gridSize = 25; //Making this a global constant to avoid array issues.
using namespace std;
void printGrid(bool gridOne[gridSize + 1][gridSize + 1]);
void determineState(bool gridOne[gridSize + 1][gridSize + 1]);
void clearScreen(void);
int main()
{
	bool gridOne[gridSize + 1][gridSize + 1] = {};
	int x, y;
	char myToken = '.';

	//only code in the main:
	//Grid grid = Grid(regels);
	//grid.draw();


	vector<Cell> myCells = vector<Cell>();
	Alive* aliveState = new Alive();
	Dead* deadState = new Dead();
	Cell cell0 = Cell(aliveState, 1, 1);
	Cell cell1 = Cell(aliveState, 1, 2);
	Cell cell2 = Cell(aliveState, 1, 3);
	Cell cell3 = Cell(aliveState, 1, 4);
	Cell cell4 = Cell(aliveState, 1, 5);
	Cell cell5 = Cell(deadState, 2, 1);
	Cell cell6 = Cell(deadState, 2, 2);
	Cell cell7 = Cell(deadState, 2, 3);
	myCells.push_back(cell0);
	myCells.push_back(cell1);
	myCells.push_back(cell2);
	myCells.push_back(cell3);
	myCells.push_back(cell4);
	myCells.push_back(cell5);
	myCells.push_back(cell6);
	myCells.push_back(cell7);
	Grid* myFirstGrid = new Grid(gridSize, 12, 12, myCells);
	myFirstGrid->setNeighBors();

	myFirstGrid->drawGrid(myToken);
	
	//myFirstGrid->drawGrid(myToken);
	/*
	Hier gaan we door de grid heen lopen en een * plaatsen.
	We plaatsen random * op het begin en daarna lopen we door alle cellen in de grid heen 
	en passen we de volgende regels toe:
	cellen met <2 of >3 buren sterven. 
	cellen met precies 2 of 3 buren overleven.
	lege buren met 3 cellen krijgen nieuwe cell.
	

	for (int i = 0; i < gridSize; i++)
	{
		cout << gridSize << "Enter the coordinates of cell " << i + 1 << " : ";
		cin >> x >> y;
		gridOne[i][i] = true;
		printGrid(gridOne);
	}

	std::ifstream input_file;
	input_file.open("D:\\School\\Jaar2\\KernModuleOOP\\Advanced\\Les1Opdracht2(GameOfLife)\\Text.txt");
	if (!input_file) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}
	while (true)
	{
		if (input_file.is_open())
		{
			string fileline, xx, yy;

			while (getline(input_file, fileline))
			{
				stringstream ss(fileline);

				getline(ss, xx, ' ');
				getline(ss, yy, ' ');

				x = stoi(xx);
				y = stoi(yy);

				gridOne[x][y] = true;
			}
			break;
		}
	}

	/*
	for (int _x = 0; _x < gridSize; _x++)
	{
		for (int _y = 0; _y < gridSize; _y++)
		{
			int random = rand() % 10 + 1;
			if (random > 1)
				gridOne[_x][_y] = true;
			else
				gridOne[_x][_y] = false;
		}
	}
	
	printGrid(gridOne);

		while (true)
		{
			determineState(gridOne);
			printGrid(gridOne);
			clearScreen();
		}*/
		return 0;	
}

void clearScreen(void) {
	#if defined(_WIN32) || defined(WIN32) || defined(__MINGW32__) || defined(__BORLANDC__)
	#define OS_WIN
	#endif

	#ifdef OS_WIN
		system("CLS");
	#endif

	#if defined(linux) || defined(__CYGWIN__)
		system("clear");
	#endif
}

void printGrid(bool gridOne[gridSize + 1][gridSize + 1]) {
	for (int a = 1; a < gridSize; a++)
	{
		for (int b = 1; b < gridSize; b++)
		{
			if (gridOne[a][b] == true)
			{
				cout << " * ";
			}
			else
			{
				cout << "  ";
			}
			if (b == gridSize - 1)
			{
				cout << endl;
			}
		}
	}
}


void compareGrid(bool gridOne[gridSize + 1][gridSize + 1], bool gridTwo[gridSize + 1][gridSize + 1]) {
	for (int a = 0; a < gridSize; a++)
	{
		for (int b = 0; b < gridSize; b++)
		{
			gridTwo[a][b] = gridOne[a][b];
		}
	}
}

void determineState(bool gridOne[gridSize + 1][gridSize + 1]) {
	bool gridTwo[gridSize + 1][gridSize + 1] = {};
	compareGrid(gridOne, gridTwo);

	for (int a = 1; a < gridSize; a++)
	{
		for (int b = 1; b < gridSize; b++)
		{
			int alive = 0;
			for (int c = -1; c < 2; c++)
			{
				for (int d = -1; d < 2; d++)
				{
					if (!(c == 0 && d == 0))
					{
						if (gridTwo[a + c][b + d])
						{
							++alive;
						}
					}
				}
			}
			if (alive < 2 || alive > 3)
			{
				gridOne[a][b] = false;
			}
			else if (alive == 3 || alive == 2)
			{
				gridOne[a][b] = true;
			}
		}
	}
}

