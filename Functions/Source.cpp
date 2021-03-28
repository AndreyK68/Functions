#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void shiftLeft(int arr[], const int n, const int number_of_shifts);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
void sort(int arr[], int n);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions!" << endl;
	const int n = 5;
	int arr[n];
	// запоняем массив случайными числами
	FillRand(arr, n);
	// вывод массива на экран
	Print(arr, n);
	cout << "Сумма элементов массива:" << Sum(arr, n) << endl;
	cout << "Среднее арифметическое:" << Avg(arr, n) << endl;

	int number_of_shifts;
	cout << "Введите количество сдвигов:"; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);

	// вывод массива на экран
	Print(arr, n);
	///////////////////////////////////////////////////////
	const int m = 8;
	int brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "Введите количество сдвигов:"; cin >> number_of_shifts;
	shiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
}
void FillRand(int arr[], const int n)
{
	//// запоняем массив случайными числами
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
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;

}
//void sort(int arr[], int n)
//{
	//for 
//}