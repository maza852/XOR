#include "stdafx.h"
#include "Internal_Neiron.h"
#include <cmath>


Internal_Neiron::Internal_Neiron(void)
{
	value = 1.0;
}

float Internal_Neiron::sum()
{
	float result = 0;
	for (auto it = left_neirons.begin(); it != left_neirons.end(); it++)
	{
		result += it->first * it->second->get_value();
	}
	return result;
}

float Internal_Neiron::activation()
{
	value = 1/(1 + exp(-sum() ));
	if (value > 0.5)
		value = 1;
	else value = 0;

	return value;
	//return 1/(1 + exp(-sum() ));
}

Internal_Neiron::~Internal_Neiron(void)
{
}
