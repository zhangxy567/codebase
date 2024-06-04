#include <bits/stdc++.h>
using namespace std;

int n;
int pay[21][21];   
int Min=INT_MAX;  
int sum=0;   
int book[21];  

void dfs(int t)
{
    if(t>=n)   
    {
        if(Min>sum)  
        {
            Min=sum;   
            return;
        }
    }
    for(int i=0;i<n;i++)   
    {
        if(!book[i])  
        {
            book[i]=1;   
            sum+=pay[t][i];   
            if(sum<Min)   //如果当前得到的sum小于最小值，就向下搜索子树；否则剪枝
                dfs(t+1);
            book[i]=0;   //没有得到比Min更小的和，回溯
            sum-=pay[t][i];
        }
    }

}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>pay[i][j];
        }
        book[i]=0;
    }
    dfs(0);
    cout<<Min<<endl;
    return 0;
}
