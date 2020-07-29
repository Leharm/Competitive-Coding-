#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,z,d;
	cin>>n;
	int a=n;
	while(true)
	{
		a++;
		x=a%10;
		y=(a/10)%10;
		z=(a/100)%10;
		d=a/1000;
		if(x!=y && x!=z && x!=d && y!=z && y!=d && z!=d)
		{
			break;
		}
	}
	cout<<a;
	return 0;
	
}
