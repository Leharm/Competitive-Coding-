#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,n) for(int i=a;i<n;i++)
bool prime(ll n)
{
	ll s=sqrt(n);
	for(int i=2;i<=s;i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}
ll maxprimefactor(ll n)
{
	// Initialize the maximum prime factor 

    // variable with the lowest one 

    long long maxPrime = -1; 

  

    // Print the number of 2s that divide n 

    while (n % 2 == 0) { 

        maxPrime = 2; 

        n >>= 1; // equivalent to n /= 2 

    } 

  

    // n must be odd at this point, thus skip 

    // the even numbers and iterate only for 

    // odd integers 

    for (int i = 3; i <= sqrt(n); i += 2) { 

        while (n % i == 0) { 

            maxPrime = i; 

            n = n / i; 

        } 

    } 

  

    // This condition is to handle the case 

    // when n is a prime number greater than 2 

    if (n > 2) 

        maxPrime = n; 

  

    return maxPrime; 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if(n%2==0)
		cout<<n/2<<" "<<n/2<<endl;
		else
		{
			if(prime(n))
			{
				cout<<1<<" "<<n-1<<endl;
			}
			else
			{
				ll ans=maxprimefactor(n);
				cout<<ans<<" "<<n-ans<<endl;
			}
		}
	}
	return 0;
}
