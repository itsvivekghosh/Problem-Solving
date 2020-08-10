#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
using namespace std;

int solve(int n, int x, vector<int> coins) {
    vector<int> dp(x+1, INT_MAX);
    dp[0] = 0;
    
    for(int i=1;i<=x;++i) {
        for(int j=0;j<n;++j) {
            if (coins[j] > i) break;
	    if (dp[i - coins[j]] != INT_MAX)
            	dp[i] = min(dp[i], dp[i - coins[j]]+1) % MOD;
        }
    }
    if (dp[x] == INT_MAX) return -1;
    return dp[x];
}

int32_t main()
{
    int x, n; cin>>n>>x;
    vector<int> coins(n);
    for(auto &a: coins) cin>>a;
    
    cout<<solve(n, x, coins);
}
