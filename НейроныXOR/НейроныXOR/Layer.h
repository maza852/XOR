#include "INeiron.h"

#pragma once
class Layer : INeiron
{
public:
	list < INeiron* > neirons;
	Layer(void);
	~Layer(void);
};

