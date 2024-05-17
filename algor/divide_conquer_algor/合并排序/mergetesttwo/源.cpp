#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <windows.h>

#include <iostream>
using namespace std;







void domergesoft(void);
void Mergesort(int*, int*, int, int);
void getrandarray(int* arr1, int* arr2);
void FprintONEarr(int* arr1, int n);
void mergeTwoarray(int*, int*, int*, int);
void FprintALLarr(int*, int*, int*);
void Merge(int a[], int b[], int left, int mid, int right);
void Copy(int a[], int b[], int left, int right);

int main()
{
	domergesoft();
	return 0;
}
void domergesoft(void)
{
	int arr1[10] = {9,8,10,1,13,20,15,7,13,2 };
	int b[10] = { 0 };
	Mergesort(arr1, b, 0, 9);
	FprintONEarr(arr1, 10);

}






void Mergesort(int a[], int b[], int left, int right)
{

	if (left < right)
	{
		int mid = (left + right) / 2;
		Mergesort(a, b, left, mid);
		Mergesort(a, b, mid + 1, right);
		Merge(a, b, left, mid, right);
		Copy(a, b, left, right);

	}
	return;
}

void Merge(int a[], int b[], int left, int mid, int right)
{
	int i = 0; //b的坐标
	int j = 0; //left第一位坐标坐标
	int k = 0; //right第一位坐标

	j = left;
	k = mid + 1;

	for (i = left; i <= right; i++)
	{
		if (mid + 1 == j)
		{
			b[i] = a[k];
			k++;
		}
		else if (right + 1 == k)
		{
			b[i] = a[j];
			j++;
		}
		else
		{
			if (a[j] <= a[k])
			{
				b[i] = a[j];
				j++;

			}
			else
			{
				b[i] = a[k];
				k++;

			}
		}

	}

}

void Copy(int a[], int b[], int left, int right)
{
	for (int i = left; i <= right; i++)
	{
		a[i] = b[i];
	}
}












void FprintONEarr(int* arr, int n)
{
	printf("arr:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
		if (i == n - 1) printf("\n");
	}

}
