#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c=0;
	cin>>a;
	cin>>b;
	while(a<=b)
	{
		a=a+a+a;
		b=b+b;
		c++;
	}
	cout<<c<<endl;
	return 0;
}
