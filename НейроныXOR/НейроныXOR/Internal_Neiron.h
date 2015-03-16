#include "INeiron.h"
#pragma once

class Internal_Neiron : public INeiron
{
public:
	float sum();
	float get_value();
	float activation();
	Internal_Neiron(void);
	~Internal_Neiron(void);
};

