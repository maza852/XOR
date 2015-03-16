#include "stdafx.h"
#include "INeiron.h"


INeiron::INeiron(void)
{
	value = 0;
}

INeiron::~INeiron(void)
{
}

void INeiron::AddNeiron(float in_value, INeiron *neiron)
{
	left_neirons.push_back( make_pair(in_value, neiron) );
}

float INeiron::get_value()
{
	return value;
}