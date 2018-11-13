#include "Properties.h"

// class Income
Income::Income()
{

}

Income::Income(int money, int food, int mineral)
{
	this->money = money;
	this->food = food;
	this->mineral = mineral;
}


// class Cost
Cost::Cost()
{

}

Cost::Cost(int money, int food, int mineral)
{
	this->money = money;
	this->food = food;
	this->mineral = mineral;
}


// class NumUnits
NumUnits::NumUnits()
{
	this->farmer = 0;
}