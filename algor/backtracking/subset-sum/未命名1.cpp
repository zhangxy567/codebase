#include<iostream>
using namespace std;
int n,c,tsum=0,total=0;
int num[1001],vis[1001];
bool sum(int i)
{
	if(tsum==c) return true;
	if(i>n) return false;
	total-=num[i];
	if(tsum+num[i]<=c)
	{
		vis[i]=1;
		tsum+=num[i];
		if(sum(i+1)) return true;
		tsum-=num[i];
	}
	if(tsum+total>=c)
	{
		vis[i]=0;
		if(sum(i+1)) return true;
	}
	total+=num[i];
	return false;
}
int main()
{
	cin>>n>>c;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		total+=num[i];
	}
	if(!sum(1)) cout<<"No Solution!";
	else
	{
		for(int i=1;i<=n;i++)
		if(vis[i]) cout<<num[i]<<" ";
	}
}
