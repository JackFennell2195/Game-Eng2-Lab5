#include "Production.h"

void Production::someMethod()
{
	int b[6];
	int input;
	int size = sizeof(b) / 4;

	for (int i = 0; i < 6; i++)
	{
		std::cin >> input; b[i] = input;
	}

	assert((size != 6) == false);

	for (int i = 0; i < size; i++)
	{
		assert((b[i] < 1 || b[i] > 46) == false);
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i != j) { assert((b[i] == b[j]) == false); }
		}
	}
}

