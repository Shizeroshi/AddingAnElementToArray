#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>

using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void Logic(int*& arr, int& n, int value)
{
	int* vrr = new int[n + 1];
	vrr[n] = value;
	for (int i = 0; i < n; i++)
	{
		vrr[i] = arr[i];
	}
	arr = vrr;
	n++;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 0A");

	int n;
	cout << "Введите размер массива: "; cin >> n;
	cout << endl;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);

	for (;;)
	{
		int value;
		cout << "Введите добавляемое значение: ";  cin >> value;
		cout << endl;

		Logic(arr, n, value);

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl << endl;
	}
	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;
}