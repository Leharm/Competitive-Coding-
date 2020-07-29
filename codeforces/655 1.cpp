#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,n) for(int i=a;i<n;i++)
int main()
{
	int t;
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
		    cin>>a[i];
		}
		int count=0;
		int maxc=0,minc=0;
		for(int i=1;i<n;i++)
		{
			if(a[i]>a[i-1])
			{
				maxc++;
				minc=0;
			}
			if(a[i]<a[i-1])
			{
				minc++;
				maxc=0;
			}
			if(maxc==4)
			{
				count++;
				maxc=0;
			}
			if(minc==4)
			{
				count++;
				minc=0;
			}
		}
		cout<<"Case #"<<x<<": "<<count<<endl;
	}
	return 0;
}
