// НейроныXOR.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "In_Neiron.h"
#include "Internal_Neiron.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	In_Neiron N1(0);
	In_Neiron N2(0);
	In_Neiron N3(1.0);

	Internal_Neiron iN1;
	Internal_Neiron iN2;
	Internal_Neiron iN3;
	Internal_Neiron iN4;

	iN1.AddNeiron(-1, &N1);
	iN1.AddNeiron(-1, &N2);
	iN1.AddNeiron(1.5, &N3);
	iN1.activation();

	iN2.AddNeiron(-1, &N1);
	iN2.AddNeiron(-1, &N2);
	iN2.AddNeiron(0.5, &N3);
	iN2.activation();

	iN4.AddNeiron(1, &iN1);
	iN4.AddNeiron(-1, &iN2);
	iN4.AddNeiron(-0.5, &iN3);

	cout << iN4.activation() << endl;
	return 0;
}

