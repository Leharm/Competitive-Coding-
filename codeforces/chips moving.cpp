#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(ll i=0;i<n;i++)
int main()
{
	int n;
	cin>>n;
	ll a[n];
	f(i,n)
	cin>>a[i];
	int ans=-1;
	f(i,n)
	{
		int count=0,position=0;
		int b[n];
		f(j,n)
		{
			b[i]=abs(a[j]-a[i]);
			if(b[i]%2==0)
			count++;
		}
		if(count>ans)
		{
			ans=count;
			position=a[i];
		}
		
	}
	cout<<n-ans<<endl;
	return 0;
}
