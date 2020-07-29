#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(int i=0;i<n;i++)
int main()
{
	int t;
	cin>>t;
	f(i,t)
	{
		int n;
		cin>>n;
		if(n==2)
		cout<<"2"<<endl;
		else if(n%2==0)
		cout<<"0"<<endl;
		else if(n%2!=0)
		cout<<"1"<<endl;
	}
	return 0;
}
