#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(ll i=0;i<n;i++)
int main()
{
	int t;
	cin>>t;
	f(i,t)
	{
		char a[9][9];
	f(i,9)
	{
		f(j,9)
		{
			cin>>a[i][j];
		}
	}
	f(i,9)
	{
		f(j,9)
		{
			if(a[i][j]=='2')
			a[i][j]='1';
		}
	}
	f(i,9)
	{
		f(j,9)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	}
	return 0;
}
