#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max,min,maxi=0,mini=0;
	max=a[0],min=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxi=i;
		}
		if(a[i]<=min)
		{
			min=a[i];
			mini=i;
		}
	}
	n=n-1;
	if(maxi>mini)
	mini=mini+1;
	cout<<maxi+n-mini;
	return 0;
	
}
