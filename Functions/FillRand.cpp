#include"FillRand.h"
void FillRand(int arr[], const int n)
{
	// запоняем массив случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
