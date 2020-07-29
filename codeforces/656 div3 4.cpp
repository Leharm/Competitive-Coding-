#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,n) for(int i=a;i<n;i++)
int fun(string s,int i,int j,char c,int count)
{
	if(i<j)
	{
		int mid=(j-i)/2;
	int left=0,right=0;
	for(int x=i;x<mid;x++)
	{
		if(s[x]=='c')
		left++;
	}
	for(int x=mid;x<j;x++)
	{
		if(s[x]=='c')
		right++;
	}
	if(left>right)
	{
		count+=(mid-left);
		fun(s,mid+1,j,c+1,count);
	}
	else
	{
		count+=(mid-right);
		fun(s,i,mid-1,c+1,count);
	}
	}
	else
	return count;
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
		char c='a';
		int i=0,j=s.length()-1;
		int count=0;
		cout<<fun(s,i,j,c,count)<<endl;
	}
}
