#pragma once
#include <list>
using namespace std;

class INeiron
{
protected:
	list< pair<float, INeiron*> > left_neirons;
	float value;
public:
	INeiron();
	void AddNeiron(float, INeiron*);
	float get_value();
	virtual float activation()=0;
	~INeiron(void);
};

