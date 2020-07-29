#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	string s;
	cin>>s;
	vector<int> v(126);
	for(int i=0;i<t;i++)
	{
		v[s[i]]++;
	}
	int z=v[122],e=v[101],r=v[114],o=v[111],n=v[110];
	int temp=min(min(o,n),e);
	o=o-temp;
	n=n-temp;
	e=e-temp;

	int zero=min(min(z,e),min(r,o));
	while(temp!=0)
	{
	cout<<"1"<<" ";
	temp--;
    }
	while(zero!=0)
	{
		cout<<"0"<<" ";
		zero--;
	}
	return 0;
}
