#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int temp=min(a,c);
	temp=min(temp,d);
	a=a-temp;
	c=c-temp;
	d=d-temp;
	int temp2=min(a,b);
	cout<<temp*256+temp2*32<<endl;
	return 0;
}
