#include "Stats.h"

Stats::Stats()
{
	this->init();
	this->totalIncome = Income(0, 0, 0);
}

void Stats::init()
{
	this->money = 0;
	this->food = 0;
	this->mineral = 0;
}