#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,n) for(int i=a;i<n;i++)
void prefix()
{
	ll n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	string str[n+1];
	for(int i=0;i<200;i++)
	{
		str[n]+='a';
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int j=1;j<=a[i];j++)
		{
			str[i]+=str[i+1][j-1];
		}
		char charac='b';
		if(str[i+1][a[i]]=='b')charac='a';
		for(ll j=a[i];j<200;j++)
		{
			str[i]+=charac;
		}
	}
	for(ll i=0;i<=n;i++)cout<<str[i]<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		prefix();
	}
	return 0;
}
