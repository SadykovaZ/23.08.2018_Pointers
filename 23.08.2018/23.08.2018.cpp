// 23.08.2018.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<time.h>

using namespace std;

//void fill_array(int a[][10], int n, int m)
//{
//	srand(time(NULL));
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			a[i][j] = 1 + rand() % 100;
//		}
//	}
//}
//
//void print_array(int a[][10], int n, int m)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//}



int main()
{
	srand(time(NULL));
	int n = 0;
start:
	cout << "Number = ";
	cin >> n;
	if (n == 2)
	{
		cout << " #2" << endl;
		int *p;
		int arr[10];
		int sum = 0;
		p = arr;
		for (p = arr; p < arr + 10; p++)
		{
			*p = -25 + rand() % 35;
			sum += *p;
		}
		for (p = arr; p < arr + 10; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
		cout << "Sum = " << sum << endl;
	}
	else if (n == 3)
	{
		cout << " #3" << endl;
		int *p;
		int arr[10];
		long long int m = 1;
		p = arr;
		for (p = arr; p < arr + 10; p++)
		{
			*p = -44 + rand() % 76;
			m *= *p;
		}
		for (p = arr; p < arr + 10; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
		cout << "Prozvedenie = " << m << endl;
	}

	else if (n == 4)
	{
		cout << " #4" << endl;
		int *p;
		int arr[10];
		int sum = 0;
		int average;
		p = arr;
		for (p = arr; p < arr + 10; p++)
		{
			*p = -15 + rand() % 105;
			sum += *p;

		}
		for (p = arr; p < arr + 10; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
		cout << "Average = " << sum / 10 << endl;
	}

	else if (n == 5)
	{
		int a = 5, b = 4, s = 0;
		int *p, *p1;
		p = &a;
		p1 = &b;
		s = *p + *p1;
		cout << "Adress result = " << &s << " " << "Sum = " << s << endl;
	}
	else if (n == 6)
	{

		int a = 2, b = 5;
		int *p1, *p2 = &b;
		p1 = &a;

		cout << *p1 - *p2;
		cout << endl;

	}

#pragma region MyRegion
	//int a, b;
	//int *p, *p1;
	//int arr[10];
	//p = arr;
	///*for (int i = 0; i < 10; i++)
	//{
	//	cin >> arr[i];
	//}*/
	//for (int i = 0; i < 10; i++)
	//{
	//	cin >> *(arr + i);
	//}
	//for (; p < arr + 10; p++)
	//{
	//	cout << *p << " ";
	//}


	/*
	int a,b;
	int arr[10];
	int *p = arr + 5;*/
	//cout << p - arr << endl;
	//a = 100;
	//b = 45;
	//p = &a;
	//p = &b;
	//p = arr;
	//cout << p << " "<<&a<<endl;
	//cout << *p << endl; //указатель разлиновывания
	//cout << arr <<" "<<&arr[0]<< endl;
	//cout << arr + 1 << " " << &arr[1] << endl;
#pragma endregion




	goto start;
	return 0;
}

//int main()
//{
//	int arr[10][10];
//	fill_array(arr, 10, 10);
//	print_array(arr, 10, 10);
//
//	return 0;
//}

