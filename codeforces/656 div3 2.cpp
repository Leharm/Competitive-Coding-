#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,n) for(int i=a;i<n;i++)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[2*n];
		for(int i=0;i<2*n;i++)
		cin>>a[i];
		vector<int> v;
		v.push_back(a[0]);
		for(int j=1;j<2*n;j++)
        {
            if(find(v.begin(),v.end(),a[j])==v.end())
            {
                v.push_back(a[j]);
            }
            
        }
		
		for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}
