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



int n, c;
int a[100];
bool flag[100];//定义bool类型的数组，标记数字的使用与否； 
int cnt = 0;//记录是否找到解
int sum = 0;

int getrw(int t) 
{
	int m = t + 1;
	int sumfunc = 0;
	for (m; m <= n; m++)
	{
		sumfunc += a[m];
	}
	return sumfunc;	
}
void dfs(int t, int w) //左支来表示是否已经遍历所有项,右值记录数字和
{
	if (cnt == 1)//如果已经找到一组，返回空，结束深搜；
		return;
	// 深度搜索的终止条件；
	if (t == n + 1)
	{
		if (w == c)//搜索到符合条件的值，进行输出这一组解； 
		{
			for (int i = 1; i <= n; i++)
			{
				if (flag[i] == 1)
				{
					printf("%d ", a[i]);
				}
			}
			cnt++;//找到一组cnt+1作为标记； 
		}
		return;
	}
	if (w > c)//如果已经使用的数字和大于所需，在往下搜索就不可能满足要求； 
		return;//因为往下已经不可能满足要求了，所以进行截枝，节省时间； 

	//左枝，即使用这个数； 
	flag[t] = 1;//将这个数标记为 1，即使用该数； 
	dfs(t + 1, w + a[t]);//递归深搜 


	//右枝，即不使用这个数； 
	flag[t] = 0;//将这一数字标记为0，即没有使用这一数字； 
	if (w + getrw(t) < c)
		return;
	dfs(t + 1, w);//递归深搜 
}

int main()
{
	cin >> n >> c;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];//求数字的和； 
	}



	if (sum < c)//判断所有数字的和是不是大于所需求的数字的和，避免不必要的深搜；
		printf("No Solution!");
	else
	{
		dfs(1, 0);//深搜开始 
		if (cnt == 0)//如果深搜没有找到合适的解，输出没有解； 
			printf("No Solution!");
	}
	return 0;
}