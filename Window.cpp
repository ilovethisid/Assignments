#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "Window.h"

#define COMMAND_SIZE 256
// size of command for system(command)

using namespace std;

// class Panel
Panel::Panel()
{

}

Panel::Panel(int x, int y)
{
	this->x = x;
	this->y = y;
}


// class Window
Window::Window(Stats stats)
{
	this->setSize();
	this->statsPanel = Panel(0, 0);
	this->commandPanel = Panel(0, 20);
	this->printStats(stats);
}

void Window::setSize()
{
	char command[COMMAND_SIZE] = { '/0', };
	sprintf(command, "mode con cols=%d lines=%d", WINWIDTH, WINHEIGHT);
	system(command);
}

void Window::gotoxy(int x, int y)
{
	COORD CursorPosition = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

void Window::printStats(Stats stats)
{
	this->gotoxy(this->statsPanel.x, this->statsPanel.y);
	cout << "Stats";
	this->gotoxy(this->statsPanel.x, this->statsPanel.y + 1);
	cout << "Money\t" << stats.money << " +" << stats.totalIncome.money;
	this->gotoxy(this->statsPanel.x, this->statsPanel.y + 2);
	cout << "Food\t" << stats.food << " +" << stats.totalIncome.food;
	this->gotoxy(this->statsPanel.x, this->statsPanel.y + 3);
	cout << "Mineral\t" << stats.mineral << " +" << stats.totalIncome.mineral;
}

void Window::getCommand(Stats stats)
{
	this->gotoxy(this->commandPanel.x, this->commandPanel.y);
	cout << "Command:" << endl;
	cin >> this->command;
	this->refresh(stats);
}

void Window::refresh(Stats stats)
{
	system("cls");
	printStats(stats);
}