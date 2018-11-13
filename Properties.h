#pragma once

class Income
{
public:
	Income();
	Income(int, int, int);

	int money;
	int food;
	int mineral;
};

class Cost
{
public:
	Cost();
	Cost(int, int, int);

	int money;
	int food;
	int mineral;
};

class NumUnits
{
public:
	NumUnits();

	int farmer;
};