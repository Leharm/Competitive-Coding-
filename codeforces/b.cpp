#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;i++)
int main()
{
	ll a,b,c,k;
	cin>>a>>b>>c>>k;
	ll sum=0;
	if(k-a>=0)
	{
		sum+=a;
		k=k-a;
		if(k-b>=0)
		{
			k=k-b;
			if(k-c>=0)
			{
				sum-=c;
			}
			else
			sum-=k;
		}
		else
		k=0;
		
	}
	else
	sum+=k;
	cout<<sum<<endl;
	return 0;
}
