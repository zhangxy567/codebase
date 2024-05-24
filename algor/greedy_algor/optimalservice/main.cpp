#include<iostream>
#include<algorithm>
using namespace std;
const int N=200;
int t[N]={0},s[N]={0}; //s为前缀和数组，记录第i个顾客的等待时间
/*
10
56 12 1 99 1000 234 33 55 99 812
*/ 
int n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>t[i];
	
	sort(t+1,t+n+1);
	
	for(int i=1;i<=n;i++) s[i]=s[i-1]+t[i];
	
	int res=0;
	for(int i=1;i<=n;i++)
	{
		res+=s[i];
	}
	
	double ans=res*1.0/n*1.0;
	cout<<ans;
	return 0;
}
