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


int n;
int pay[21][21];   //pay[i][j]��ʾ������i�������j���˵ķ���Ϊpay[i][j]
int Min = INT_MAX;   //��ΪҪ����Сֵ�����Խ�Min��ʼ��Ϊ���������int�ͣ�
int sum = 0;   //��¼���������еõ��Ĺ������ú�
int book[21];   //���ڱ��һ�����Ƿ��ѱ����乤����book[i]=0��ʾû�б����乤����book[i]=1��ʾ�Ѿ������乤��

void dfs(int t)
{
    if (t >= n)   //�Ѿ�����Ҷ�ӽ�㣬�����ж��Ƿ��ҵ�����С�ܷ���
    {
        if (Min > sum)   //û���ҵ���С�ܷ���
        {
            Min = sum;   //������С�ܷ���
            return;
        }
    }
    for (int i = 0; i < n; i++)   //Ϊ�ڹ���t������
    {
        if (!book[i])   //��i���˻�û�б����Ź���
        {
            book[i] = 1;   //������t�������i����
            sum += pay[t][i];   //�����ܷ���
            if (sum < Min)   //�����ǰ�õ���sumС����Сֵ�����������������������֦
                dfs(t + 1);
            book[i] = 0;   //û�еõ���Min��С�ĺͣ�����
            sum -= pay[t][i];
        }
    }

}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> pay[i][j];
        }
        book[i] = 0;
    }
    dfs(0);
    cout << Min << endl;
    return 0;
}
