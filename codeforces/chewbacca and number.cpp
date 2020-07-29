#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define f(i,n) for(ll i=0;i<n;i++)
int main()
{
	ll x;
	cin>>x;
	vector <ll> v;
	while(x>9)
	{
		int temp=x%10;
		if(temp<5)
		{
			v.push_back(temp);
		}
		else
		{
			v.push_back(9-temp);
		}
		x=x/10;
	}
	if(x==9)
	v.push_back(9);
	else if(x<5)
	v.push_back(x);
	else if(x>=5)
	v.push_back(9-x);
	for(int i=v.size()-1;i>=0;i--)
	{
		cout<<v[i];
	}
	return 0;
}
