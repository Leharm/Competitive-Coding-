#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		if(n%2==0)
		{
			int count1=0,count2=0;
			for(int k=0;k<n;k++)
			{
				if(a[k]%2==0)
				count1++;
				else
				count2++;
			}
			if(count1==n||count2==n)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
		}
		if(n%2!=0)
		{
			int c=0;
			for(int k=0;k<n;k++)
			{
				if(a[k]%2==0)
				c++;
			}
			if(c==n)
			cout<<"NO"<<endl;
			else
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
