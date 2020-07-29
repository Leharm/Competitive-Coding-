#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,a="hello";
	int j=0,ans=0;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==a[j])
		{
			j++;
			ans++;
		}
		if(ans==5)
		break;
	
	}
	if(ans==5)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
