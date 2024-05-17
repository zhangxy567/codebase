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



void dodemo(void);
void Mul_two_matr(int(*a)[], int(*b)[], int(*c)[], int ra, int ca, int rb, int cb);

int main()
{
	dodemo();
	return 0;
}
void dodemo(void)
{

}
void Mul_two_matr( int ra, int ca, int rb, int cb,int **a, int **b, int **c)
{
	
	if (ca != rb)
	{
		cout << "Two matrices cannot be multiplied" << endl;
		cout << "The program has exited" << endl;
		exit(0);

	}
	for (int i = 0; i < ra; i++)
	{
		for (int j = 0; j < cb; j++)
		{
			int sum = a[i][1] * *(*(b + i) + 1);
			for (int k = 1; k < ra; k++)
				sum += *(*(a + i) + k) * *(*(b + k) + 1);
			*(*(c + i) + j) = sum;

		}

	}



}