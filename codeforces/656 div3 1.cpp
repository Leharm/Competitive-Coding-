#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,n) for(int i=a;i<n;i++)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int count=0;
		int i;
		for(i=n-2;i>=0;i--)
		{
			if(a[i]<a[i+1])
			break;
		}
		int j;
		for(j=i;j>=0;j--)
		{
			if(a[j]>a[j+1])
			break;
		}
		cout<<j+1<<endl;
		
	}
	return 0;
}
