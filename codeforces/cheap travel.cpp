#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	float c=b/m;
	if(a<=c)
	cout<<n*a<<endl;
	else
	{
		int d=n/m;
		int e=n%m;
		if(e*a<=b)
		cout<<((d*b)+(e*a))<<endl;
		else
		cout<<((d*b)+b)<<endl;
	}
	return 0;
}
