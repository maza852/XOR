#include "stdafx.h"
#include "In_Neiron.h"


In_Neiron::In_Neiron(float input)
{
	value = input;
}
void In_Neiron::set_value(float inputValue)
{
	value = inputValue;
}

float In_Neiron::activation()
{
	return value;
}

In_Neiron::~In_Neiron(void)
{
}
