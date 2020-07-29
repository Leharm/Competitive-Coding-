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
		ll a,b,n;
		cin>>a>>b>>n;
		if(a>n || b>n)
		cout<<"0"<<endl;
		else
		{
			int count=1;
			while(a+b<=n)
			{
				count++;
				if(a<b)
				a+=b;
				else
				b+=a;
			}
			cout<<count<<endl;
		}
	}
	return 0;
}
