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
		{
			cin>>a[i];
		}
		int count=0;
		bool flag=false;
		bool neg=false;
		for(int i=0;i<n;i++)
		{
			if(a[i]==i+1 && flag==false)
			{
				count++;
				flag=true;
			}
			else
			{
				flag=false;
				neg=true;
			}
		}
		if(flag==false)
		count++;
		if(neg==false)
		count=0;
		cout<<count<<endl;
	}
	return 0;
}
