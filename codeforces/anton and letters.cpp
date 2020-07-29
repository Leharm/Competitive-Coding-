#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[1001];
	gets(s);
	int ans=0,n=strlen(s);
	sort(s,s+n);
	for(int i=0;i<n-1;i++)
	{
		if(s[i]>=97 && s[i]<=122)
		{
			if(s[i]!=s[i+1])
			ans++;
		}
	}
	
	cout<<ans;
	return 0;
}
