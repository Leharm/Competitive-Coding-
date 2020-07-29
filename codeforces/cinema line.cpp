#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,n) for(ll i=0;i<n;i++)
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x=0,y=0,z=0;
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==25)
		x++;
		else if(a[i]==50)
		{
			if(x>0)
			{
				x--;
				y++;
			}
			else
			{
				k=1;
				break;	
			}
		}
		else
		{
			if(x>0&&y>0)
			{
				x--;
				y--;
				z++;
			}
			else if(x>=3)
			{
				x=x-3;
				z++;
			}
			else
			{
				k=1;
				break;
			}
		}
	}
	if(k==1)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
	return 0;
	
	

}
