#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<n;i++)
	{
		if(abs(s2[i]-s1[i])<=5)
		ans+=abs(s2[i]-s1[i]);
		else
		ans+=(10-abs(s2[i]-s1[i]));
		
	}
	cout<<ans<<endl;
	return 0;
}
