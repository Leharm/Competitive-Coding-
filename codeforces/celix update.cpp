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
		ll x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<(x2-x1)*(y2-y1)+1<<endl;
	}
	return 0;
}
	
