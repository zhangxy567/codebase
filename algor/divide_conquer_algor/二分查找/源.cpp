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

void Findf(int* arr,static int left,static int right,int key)
{
	
	 int mid = (right + left) / 2;
	
	if(left>right) 
	{
		printf("已越界,未找到");
		return;
	}
	if (arr[mid] == key) 
	{
		printf("已找到,下标为%d", mid);
		return;
	}
	
	if (arr[mid] > key)
		{
			right = mid - 1;
		}
	else if (arr[mid] < key)
		{
			left = mid + 1;
		}

	Findf(arr, left, right, key);
	}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key;
	cout << "请输入需要查找的数 :>";
	cin >> key;
	Findf(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, key);
	system("pause");
}




//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;//要找的数字
//	int mid = 0;//记录中间元素的下标
//	int find = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			find = 1;
//			break;
//		}
//	}
//	if (1 == find)
//		printf("找到了,下标是%d\n", mid);
//	else
//		printf("找不到\n");
//}
