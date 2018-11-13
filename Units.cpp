#define _CRT_SECURE_NO_WARNINGS

#include <string.h>

#include "Units.h"

Units::Units()
{
	
}

Farmer::Farmer()
{
	this->income.money = 0;
	this->income.food = 10;
	this->income.mineral = 0;
	this->cost = Cost(0, 1, 0);
	strcpy(this->name, "Farmer");
}