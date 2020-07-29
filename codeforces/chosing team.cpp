#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		a[i]+=k;
		if(a[i]<=5)
		count++;
	}
	cout<<count/3<<endl;
	return 0;
}
