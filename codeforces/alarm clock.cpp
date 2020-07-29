#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;i++)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		if(b>=a)
		{
			cout<<b<<endl;
			continue;
		}
		else if(d>=c)
		{
			cout<<"-1"<<endl;
			continue;
		}
		else
		{
			ll temp=a-b;
			ll ptr=c-d;
			ll value;
			if(temp%ptr==0)
			value=temp/ptr;
			else
			value=(temp/ptr)+1;
			ll sum=b+value*c;
			cout<<sum<<endl;
		}
	}
	return 0;
}
