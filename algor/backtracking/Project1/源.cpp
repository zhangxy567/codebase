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
bool flag[100];//����bool���͵����飬������ֵ�ʹ����� 
int cnt = 0;//��¼�Ƿ��ҵ���
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
void dfs(int t, int w) //��֧����ʾ�Ƿ��Ѿ�����������,��ֵ��¼���ֺ�
{
	if (cnt == 1)//����Ѿ��ҵ�һ�飬���ؿգ��������ѣ�
		return;
	// �����������ֹ������
	if (t == n + 1)
	{
		if (w == c)//����������������ֵ�����������һ��⣻ 
		{
			for (int i = 1; i <= n; i++)
			{
				if (flag[i] == 1)
				{
					printf("%d ", a[i]);
				}
			}
			cnt++;//�ҵ�һ��cnt+1��Ϊ��ǣ� 
		}
		return;
	}
	if (w > c)//����Ѿ�ʹ�õ����ֺʹ������裬�����������Ͳ���������Ҫ�� 
		return;//��Ϊ�����Ѿ�����������Ҫ���ˣ����Խ��н�֦����ʡʱ�䣻 

	//��֦����ʹ��������� 
	flag[t] = 1;//����������Ϊ 1����ʹ�ø����� 
	dfs(t + 1, w + a[t]);//�ݹ����� 


	//��֦������ʹ��������� 
	flag[t] = 0;//����һ���ֱ��Ϊ0����û��ʹ����һ���֣� 
	if (w + getrw(t) < c)
		return;
	dfs(t + 1, w);//�ݹ����� 
}

int main()
{
	cin >> n >> c;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];//�����ֵĺͣ� 
	}



	if (sum < c)//�ж��������ֵĺ��ǲ��Ǵ�������������ֵĺͣ����ⲻ��Ҫ�����ѣ�
		printf("No Solution!");
	else
	{
		dfs(1, 0);//���ѿ�ʼ 
		if (cnt == 0)//�������û���ҵ����ʵĽ⣬���û�н⣻ 
			printf("No Solution!");
	}
	return 0;
}