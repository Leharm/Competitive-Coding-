#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define f(i,n) for(ll i=0;i<n;i++)
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int b[n];
		b[n-1]=a[n-1];
		int min=a[n-1];
		for(int j=n-2;j>=0;j--)
		{
			if(a[j]<min)
			{
				min=a[j];
			}
			b[j]=min;
		}
		
		int count=0;
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>b[j+1])
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
