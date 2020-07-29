#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0,b=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')
		a++;
		else
		b++;
	}
	cout<<n-2*min(a,b)<<endl;
	return 0;
	
}
