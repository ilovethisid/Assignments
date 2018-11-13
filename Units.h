#pragma once

#include "Properties.h"

class Units
{
public:
	char name[10];
	Income income;
	Cost cost;

	Units();
};

class Farmer :public Units
{
public:
	Farmer();
};