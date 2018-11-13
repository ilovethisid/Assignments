#pragma once

#include "Stats.h"

#define WINWIDTH 100
#define WINHEIGHT 30

class Panel
{
public:
	int x, y;

	Panel();
	Panel(int, int);
};

class Window
{
private:
	void setSize();
	Panel statsPanel;

public:
	char command[100];
	Panel commandPanel;

	Window(Stats);

	void gotoxy(int, int);
	void printStats(Stats);
	void getCommand(Stats);
	void refresh(Stats);
};