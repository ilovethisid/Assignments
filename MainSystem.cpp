#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <Windows.h>

#include "Window.h"
#include "Stats.h"
#include "Units.h"
#include "Properties.h"

using namespace std;

// function headers
void gamestart(Window, Stats);
void gameover();
void pickCard(NumUnits, Window, Stats);


// structure
int main(void)
{
	Stats stats = Stats();
	Window win = Window(stats);

	gamestart(win, stats);

	return 0;
}

void gamestart(Window win, Stats stats)
{
	bool isGameover = false;
	NumUnits numUnits = NumUnits();

	while (!isGameover)
	{
		win.gotoxy(0, 20);
		pickCard(numUnits, win, stats);
		win.getCommand(stats);
	}

	gameover();
}

void gameover()
{

}


// ingame functions
void pickCard(NumUnits numUnits, Window win, Stats stats)
{
	win.gotoxy(win.commandPanel.x, win.commandPanel.y);

	cout << "Picking a card..." << endl;

	Units newUnit = Farmer();
	
	cout << "You picked " << newUnit.name << endl;
	numUnits.farmer++;

	while (!_kbhit())
	{
		// wait until any key is pressed
	}

	FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
	stats.totalIncome.money += newUnit.income.money;
	stats.totalIncome.food += newUnit.income.food;
	stats.totalIncome.mineral += newUnit.income.mineral;
	win.refresh(stats);
}