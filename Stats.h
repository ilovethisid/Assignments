#pragma once

#include "Properties.h"

class Stats
{
public:
	int money;
	int food;
	int mineral;
	Income totalIncome;

	Stats();

	void init();
};

