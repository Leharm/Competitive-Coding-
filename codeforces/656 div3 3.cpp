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
		ll x,y,z;
		cin>>x>>y>>z;
		if(x==y && y==z)
		{
			cout<<"YES"<<endl;
			cout<<x<<" "<<y<<" "<<z<<endl;
		}
		else if(y==z && x>y)
		cout<<"NO"<<endl;
		else if(x==z && z<y)
		cout<<"NO"<<endl;
		else if(x==y && y<z)
		cout<<"NO"<<endl;
		else if(x!=y && y!=z && z!=x)
		cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			if(x==y)
			cout<<x<<" "<<z<<" "<<"1"<<endl;
			else if(y==z)
			cout<<y<<" "<<x<<" "<<"1"<<endl;
			else if(x==z)
			cout<<x<<" "<<y<<" "<<"1"<<endl;
		}
	}
	return 0;
}
