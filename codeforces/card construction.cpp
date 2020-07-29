#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(ll i=0;i<n;i++)
int main()
{
	ll t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		ll n;
		cin>>n;
		ll count=0;
		while(n>1)
		{
			count++;
			ll x=(-1+sqrt(1+24*n))/6;
			ll temp=(3*x*x+x)/2;
			n=n-temp;
			
		}
		cout<<count<<endl;
	}
	return 0;
}
