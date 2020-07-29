#include<bits/stdc++.h>
using namespace std;
void calculate(int n)
{
	if(n<=2)
	{
		cout<<"0"<<endl;
		return;
	}
	if(n%2==0)
	{
		int a;
		a=(n/2)-1;
		cout<<a<<endl;
		return;
	}
	if(n%2!=0)
	{
		int a;
		a=n/2;
		cout<<a<<endl;
		return;
	}
	
	
	
}
int main()
{
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		calculate(n);
	}
	return 0;
}
