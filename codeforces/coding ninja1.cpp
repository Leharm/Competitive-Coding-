#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,n) for(int i=a;i<n;i++)
int main()
{
	int N,W;
	cin >> N >> W;
    vector<int> w(N), v(N);
    for(int i = 0; i < N; i++) {
        cin>>w[i]>>v[i];
    }
	ll dp[N][W+1];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j <= W; j++) {
            if(i == 0) { if(j >= w[i]) dp[i][j] = v[i];}
            else if(j - w[i] >= 0) dp[i][j] = max(v[i] + dp[i-1][j-w[i]], dp[i-1][j]);
            else dp[i][j] = dp[i-1][j];
        }
    }

    cout<<dp[N-1][W]<<endl;

    return 0;
}
