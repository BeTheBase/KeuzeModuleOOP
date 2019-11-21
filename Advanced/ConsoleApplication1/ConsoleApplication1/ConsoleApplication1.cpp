/*
#include <iostream>
#include <cstdlib>


const int gridsize = 20; //Making this a global constant to avoid array issues.

void Display(bool grid[gridsize + 1][gridsize + 1]) {
	for (int a = 1; a < gridsize; a++) {
		for (int b = 1; b < gridsize; b++) {
			if (grid[a][b] == true) {
				std::cout << " *";
			}
			else {
				std::cout << "  ";
			}
			if (b == gridsize - 1) {
				std::cout << std::endl;
			}
		}
	}
}
//This copy's the grid for comparision purposes.
void CopyGrid(bool grid[gridsize + 1][gridsize + 1], bool grid2[gridsize + 1][gridsize + 1]) {
	for (int a = 0; a < gridsize; a++) {
		for (int b = 0; b < gridsize; b++) { grid2[a][b] = grid[a][b]; }
	}
}
//Calculates Life or Death
void liveOrDie(bool grid[gridsize + 1][gridsize + 1]) {
	bool grid2[gridsize + 1][gridsize + 1] = {};
	CopyGrid(grid, grid2);
	for (int a = 1; a < gridsize; a++) {
		for (int b = 1; b < gridsize; b++) {
			int life = 0;
			for (int c = -1; c < 2; c++) {
				for (int d = -1; d < 2; d++) {
					if (!(c == 0 && d == 0)) {
						if (grid2[a + c][b + d]) { ++life; }
					}
				}
			}
			if (life < 2) { grid[a][b] = false; }
			else if (life == 3) { grid[a][b] = true; }
			else if (life > 3) { grid[a][b] = false; }
		}
	}
}

int main() {

	//const int gridsize = 50;
	bool grid[gridsize + 1][gridsize + 1] = {};

	//Still have to manually enter the starting cells.
	grid[gridsize / 2][gridsize / 2] = true;
	grid[gridsize / 2 - 1][gridsize / 2] = true;
	grid[gridsize / 2][gridsize / 2 + 1] = true;
	grid[gridsize / 2][gridsize / 2 - 1] = true;
	grid[gridsize / 2 + 1][gridsize / 2 + 1] = true;

	while (true) {
		//The following copies our grid.

		Display(grid);     //This is our display.
		liveOrDie(grid); //calculate if it lives or dies.
		system("CLS");
	}
}
#include <iostream>;
#include "Verkoop.h";
#include "BritseBTWBerekening.h";

BtwBerekening* geefBerekening()
{
	return new BritseBTWBerekening();
}

int main()
{
	BtwBerekening* berekening = geefBerekening();
	Verkoop* verkoop0 = new Verkoop(BtwBerekening::VERKOOP_TYPE_BOEKEN, 69.95);
	Verkoop* verkoop1 = new Verkoop(BtwBerekening::VERKOOP_TYPE_KLEDING, 148.95);
	Verkoop* verkoop2 = new Verkoop(BtwBerekening::VERKOOP_TYPE_SCHOENEN, 299.45);

	verkoop0->berekenBTW(berekening);
	verkoop1->berekenBTW(berekening);
	verkoop2->berekenBTW(berekening);

	delete verkoop0;
	delete verkoop1;
	delete verkoop2;

	return 0;
}*/
#include <iostream>
#include <cstdlib>
#include "unistd.h"
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

const int gridSize = 25;
void printGrid(bool gridOne[gridSize + 1][gridSize + 1]);
void determineState(bool gridOne[gridSize + 1][gridSize + 1]);
void clearScreen(void);

int main() {

	system("color A");
	bool gridOne[gridSize + 1][gridSize + 1] = {};
	int x, y, n;
	string nc;
	string start;
	string filename = "Text.txt";
	cout << "                         THE GAME OF life - Implementation in C++" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Also known simply as life, " << endl;
	cout << "is a cellular automaton devised by the British mathematician John Horton Conway in 1970." << endl;
	cout << endl;
	cout << "Rules" << endl;
	cout << "The universe of the Game of life is an infinite two-dimensional orthogonal grid of square cells," << endl;
	cout << "each of which is in one of two possible states, life or dead. Every" << endl;
	cout << "cell interacts with its eight neighbours, which are the cells that are horizontally, vertically, or diagonally adjacent." << endl;
	cout << "At each step in time, the following transitions occur:" << endl;
	cout << "1. Any live cell with fewer than two live neighbours dies, as if caused by under-population." << endl;
	cout << "2. Any live cell with two or three live neighbours lives on to the next generation." << endl;
	cout << "3. Any live cell with more than three live neighbours dies, as if by over-population." << endl;
	cout << "4. Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction." << endl;
	cout << endl;
	cout << "O - living cell" << endl;
	cout << ". - dead cell" << endl;
	cout << endl;
	cout << "Enter the number of cells, or 'r' to read cells from file: ";
	cin >> nc;
	cout << endl;

	if (nc == "r")
	{
		while (true)
		{

			cout << "Enter name of file to read from: " << endl;
			cin >> filename;

			ifstream readfile(filename);
			if (readfile.is_open())
			{
				string fileline, xx, yy;

				while (getline(readfile, fileline))
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
			else {
				cout << "No such file, try again." << endl;
			}
		}
	}
	else
	{

		for (int i = 0; i < stoi(nc); i++)
		{
			cout << stoi(nc) << "Enter the coordinates of cell " << i + 1 << " : ";
			cin >> x >> y;
			gridOne[x][y] = true;
			printGrid(gridOne);
		}
	}
	cout << "Grid setup is done. Start the game ? (y/n)" << endl;
	printGrid(gridOne);
	cin >> start;
	if (start == "y" || start == "Y")
	{
		while (true)
		{
			printGrid(gridOne);
			determineState(gridOne);
			//usleep(200000);
			clearScreen();
		}
	}
	else
	{
		return 0;
	}
}

void clearScreen(void) {
	// Tested and working on Ubuntu and Cygwin
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
				cout << " O ";
			}
			else
			{
				cout << " . ";
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
			if (alive < 2)
			{
				gridOne[a][b] = false;
			}
			else if (alive == 3)
			{
				gridOne[a][b] = true;
			}
			else if (alive > 3)
			{
				gridOne[a][b] = false;
			}
		}
	}
}