#include<bits/stdc++.h>
using namespace std;
 
bool cmp(int a,int b) {
	return a>b;
}
 
int MaxMerge(int a[],int k) {
	int max=0;
	for(int i=0; i<k-1; i++) {
		sort(a+i,a+k,cmp);//�������� ֻ�Ժ��滹û�в�����Ԫ�ؽ�����������
		a[i+1]=a[i]+a[i+1];
		max=max+a[i+1]-1;
	}
	return max;
}
 
int MinMerge(int b[],int k) {
	int min=0;
	for(int i=0; i<k-1; i++) {
		sort(b+i,b+k);//��������
		b[i+1]=b[i]+b[i+1];
		min=min+b[i+1]-1;
	}
	return min;
}
 
int main() {
	int k;
	cin>>k;
	int a[k],b[k];
	int x;
	for(int i=0; i<k; i++) {
		cin>>x;
		a[i]=x;
		b[i]=x;
	}
	cout<<MaxMerge(a,k)<<" "<<MinMerge(b,k)<<endl;
	return 0;
}
/*
4
5 12 11 2
78 52
*/
