#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long a,b,c,n,x;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b>>c>>n;
		x=max(max(a,b),c);
		n=(n+a+b+c-3*x);
		if(n>=0)
		{
		if(n%3==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
