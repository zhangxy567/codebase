#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>


void dodemo(void);
void Mul_two_matr( int ra, int ca, int rb, int cb,int(*a)[ca], int(*b)[cb], int(*c)[cb]);
void PrintArr(int ra,int ca,int a[ra][ca]);
void MatrixChain(int p[],int n,int (*s)[7],int (*m)[7]);
void Printm_s(int r,int c,int a[r][c]);


int main() {

    dodemo();
    return 0;
}
void dodemo(void)
{
    int p[7]={30,35,15,5,10,20,25};
    int s[7][7]={0};
    int m[7][7]={0};
    MatrixChain(p,6,s,m);
    Printm_s(7,7,s);
    Printm_s(7,7,m);

}

void MatrixChain(int p[],int n,int (*s)[7],int (*m)[7])
{
    //解决长度为1的矩阵m[i][i]
    for(int i=1;i<=n;i++)
    {
        m[i][i] = 0;
    }
    //从长度为2,开始解决m[i][j],i<j
    for(int r=2;r<=n;r++)
    {
        for(int i =1;i<=n-r+1;i++)
        {
            int j=i+r-1;

            m[i][j]=m[i+1][j]+p[i-1]*p[i]*p[j];
            s[i][j]=i;
            for(int k=i+1;k<j;k++)
            {
             int t =m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];//注意最左边的为p[i-1]
             if(t<m[i][j])
             {
                 m[i][j]=t;
                 s[i][j]=k;

             }
            }
        }
    }
}


//在必要环境下可以用来打印二维数组
void PrintArr(int ra,int ca,int a[ra][ca])
{
    for(int i=0 ; i < ra ; i++  )
    {
        for(int j = 0; j < ca ; j++ )
        {
            printf("%d\t",a[i][j]);
            if ( j == ra - 1 )
            {
                printf("\n");
            }

        }
    }
}

void Printm_s(int r,int c,int a[r][c])
{
    for(int i=1 ; i < r ; i++  )
    {
        for(int j = 1; j < c ; j++ )
        {
            printf("%d\t",a[i][j]);
            if ( j == c - 1 )
            {
                printf("\n");
            }

        }
    }
}




//两个矩阵的乘法,在知道矩阵连乘积的完全加括号之后,就可递归滴调用s[i][j]来使用这个函数
void Mul_two_matr( int ra, int ca, int rb, int cb,int(*a)[ca], int(*b)[cb], int(*c)[cb]) {

    if (ca != rb) {
        printf("Two matrices cannot be multipliedc\n");
        printf("The program has exited\n");
        exit(0);

    }

    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            int sum = 0 ;
            for (int k = 0; k < ca; k++)
            { sum += a[i][k] * b[k][j]; }

            c[i][j] = sum;

        }

    }
}
