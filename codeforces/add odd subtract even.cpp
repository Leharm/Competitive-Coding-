#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b;
		if(a==b)
		cout<<"0"<<endl;
		else if(b>a)
		{
			if((b-a)%2==0)
			cout<<"2"<<endl;
			else
			cout<<"1"<<endl;
		}
		else
		{
			if((a-b)%2==0)
			cout<<"1"<<endl;
			else
			cout<<"2"<<endl;
		}
	}
	return 0;
}
