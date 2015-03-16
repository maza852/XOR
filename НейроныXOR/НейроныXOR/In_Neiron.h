#pragma once
#include "INeiron.h"
class In_Neiron : public INeiron
{
public:
	In_Neiron();
	In_Neiron(float);
	void set_value(float);
	float activation();
	~In_Neiron(void);
};

