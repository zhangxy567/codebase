#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <windows.h>

//二分查找只适合有序的数字序列
//
#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int invalue = 0;

	scanf("%d", &invalue);
	int lefcoo = 0;
	int rigcoo = sizeof(arr) / sizeof(arr[0]) -1 ;
	int mid = 0;

	while (lefcoo<=rigcoo)
	{
		mid = (lefcoo + rigcoo) / 2;

		if (arr[mid] < invalue)
		{
			lefcoo = mid + 1;
		}
		else if (arr[mid] > invalue)
		{
			rigcoo = mid - 1;
		}
		else if (arr[mid] == invalue)
		{
			printf("找到了,下标是%d", mid);
			break;
		}
		
			
	}

	if(lefcoo>rigcoo) printf("不存在");


	return 0;
}