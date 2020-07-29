#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,n) for(int i=a;i<n;i++)
int count(string s,int n,string t)
{
	int ans=0;
	for(int i=0;i<=n-7;i++)
	{
		int j;
		for(j=0;j<7;j++)
		{
			if(s[i+j]!=t[j])
			break;
		}
		if(j==7)
		{
			ans++;
			j=0;
		}
	}
	return ans;
}
int check(string s,int n,string t)
{
	int j;
	int i;
			for(i=0;i<=n-7;i++)
			{
				for(j=0;j<7;j++)
				{
					if(s[i+j]=='?')
					{
						continue;
					}
					else if(s[i+j]!=t[j])
					break;
				}
				if(j==7)
				{
					return i;
				}
			}
			return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		string t="abacaba";
		if(n<7)
		cout<<"NO"<<endl;
		int res=count(s,n,t);
		if(res==1)
		{
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++)
			{
				if(s[i]=='?')
				s[i]='d';
			}
			cout<<s<<endl;
		}
		else if(res>1)
		{
			cout<<"NO"<<endl;
		}
		else if(res==0)
		{
			int index=check(s,n,t);
			if(index==-1)
			cout<<"NO"<<endl;
			else
			{
				int j=0;
				for(int i=0;i<n;i++)
				{
					if(s[i]=='?')
					{
						s[i]='d';
					}
				}
				for(int i=index;i<index+7;i++)
				{
					s[i]=t[j];
					j++;
				}
				int lehar=count(s,n,t);
				if(lehar==1)
				{
					cout<<"YES"<<endl;
					cout<<s<<endl;
				}
				else
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
