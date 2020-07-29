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
		int n;
		cin>>n;
		if(n==1)
		cout<<"-1"<<endl;
		else if(n%3==0||n%3==2)
		{
			f(i,n-1)
			cout<<"7";
			cout<<"3"<<endl;
		}
		else if(n%3==1)
		{
			f(i,n-1)
			cout<<"7";
			cout<<"4"<<endl;
		}
		
	}
	return 0;
}
