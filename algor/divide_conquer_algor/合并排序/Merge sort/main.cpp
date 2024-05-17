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
void Mergesort(int*,int*,int,int);
void getrandarray(int* arr1, int* arr2);
void FprintONEarr(int* arr1, int n,int num);
void mergeTwoarray(int*,int*,int*,int);
void FprintALLarr(int*,int*,int*);
void Merge(int a[], int b[], int left, int mid, int right);
void Copy(int a[], int b[], int left, int right);

int main()
{
	domergesoft();
	return 0;
}
void domergesoft(void)
{
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int arr3[20] = { 0 };
	int b[10] = { 0 };

	getrandarray(arr1, arr2);

	FprintONEarr(arr1, 9, 9);
	FprintONEarr(arr2, 9, 9);

	Mergesort(arr1,b,0,9);
	Mergesort(arr2,b,0,9);

	mergeTwoarray(arr1, arr2, arr3, 20);
	FprintALLarr(arr1, arr2, arr3);
	
}






void Mergesort(int a[],int b[], int left, int right)
{
	
	if(left<right)
	{
		int mid = (left + right) / 2;
		Mergesort(a,b, left, mid);
		Mergesort(a,b, mid + 1, right);
		Merge(a, b, left, mid, right);
		Copy(a, b, left, right);

	}
	return ;
}

void Merge(int a[], int b[], int left, int mid, int right)
{
	int i = 0 ; //b的坐标
	int j = 0 ; //left第一位坐标坐标
	int k = 0 ; //right第一位坐标

	j = left;
	k = mid + 1;

	for (i = left; i <= right; i++)
	{
		if (mid+1 == j)
		{
			b[i] = a[k];
			k++;
		}
		else if (right+1 == k)
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




void mergeTwoarray(int arr1[], int arr2[],int arr3[],int longnum)
{
	
	int i1 = 0, i2 = 0;
	int i3 = 0;
	for (; i3 < longnum; i3++)
	{
		if (10 == i1)
		{
			arr3[i3] = arr2[i2];
			i2++;
		}
		else if (10 == i2)
		{
			arr3[i3] = arr1[i1];
			i1++;
		}
		else
		{
			if (arr1[i1] <= arr2[i2])
			{
				arr3[i3] = arr1[i1];
				i1++;

			}
			else
			{
				arr3[i3] = arr2[i2];
				i2++;

			}
		}

	}
	return;

}



void FprintALLarr(int* arr1,int* arr2,int* arr3)
{
	int usenum = 0;
	FprintONEarr(arr1, 10,usenum);
	usenum++;
	FprintONEarr(arr2, 10,usenum);
	usenum++;
	FprintONEarr(arr3, 20,usenum);

}
void FprintONEarr(int* arr, int n,int num)
{
	if (num == 0)
	{
		printf("arr1:\n");
	}
	else if (num == 1)
	{
		printf("arr2:\n");
	}
	else if (2 == num)
	{
		printf("b:\n");
	}
	else;

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
		if (i == n - 1) printf("\n");
	}

}



void getrandarray(int arr1[], int arr2[])
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		arr1[i] = rand() % 100 + 1;
	}
	srand((unsigned int)time(NULL) + 1);
	for (int i = 0; i < 10; i++)
	{
		arr2[i] = rand() % 100 + 1;
	}
}

