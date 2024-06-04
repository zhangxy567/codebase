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
            if(sum<Min)   //�����ǰ�õ���sumС����Сֵ�����������������������֦
                dfs(t+1);
            book[i]=0;   //û�еõ���Min��С�ĺͣ�����
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
