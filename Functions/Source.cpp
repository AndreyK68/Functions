#include<iostream>
using namespace std;
#define tab "\t"
void FillRand(int arr[], const int n)
{
	// запон€ем массив случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void Print(int arr[], const int n)
{
	// вывод массива на экран
	 for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl; 
}
void shiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
void main()
{
	setlocale(LC_ALL, "");
		cout << "Hello Functions!" << endl;
		const int n = 5;
		int arr[n];
		// запон€ем массив случайными числами
		FillRand(arr, n);
		// вывод массива на экран
		Print(arr, n);

		int number_of_shifts;
		cout << "¬ведите количество сдвигов:"; cin >> number_of_shifts;
		shiftLeft(arr, n, number_of_shifts);

		// вывод массива на экран
		Print(arr, n);
		///////////////////////////////////////////////////////
		const int m = 8;
		int brr[m];
		FillRand(brr, m);
		Print(brr, m);
		cout << "¬ведите количество сдвигов:"; cin >> number_of_shifts;
		/*for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = brr[0];
			for (int j = 0; j < m; j++)
			{
				brr[j] = brr[j + 1];
			}
			brr[m - 1] = buffer;
		}*/
		shiftLeft(brr, m, number_of_shifts);
		Print(brr, m);
}