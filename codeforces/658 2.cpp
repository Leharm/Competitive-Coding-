#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{

	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;

		ll summation= 0;
		vector<ll> a(n);
		for(int i=0; i<n; i++)
			cin >> a[i];

		 ll noofones= 0;
		for(int i=0; i<n; i++)
		{
			if(a[i] == 1)
			{
				noofones++;
				summation=1-summation;
			}
			else
				break;
		}
		if(noofones==n)
		{
			if(n%2)
			 cout << "First" << endl;
			else
			 cout << "Second" << endl;
			continue;
		}
		if(summation==0)
			cout << "First" << endl;
		else
			cout << "Second" << endl;
	}
	return 0;
}
