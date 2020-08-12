#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;

int findSolution(int n, int x, vector<int> coins) {
    int dp[n+1][x+1];
    memset(dp, 0, sizeof(int)*(x+1)*(n+1));
    
    for(int i=0;i<n+1;i++) dp[i][0] = 1;
    
    for (int i=1;i<n+1;i++) {
        for(int j=1;j<x+1;j++) {
            if(j < coins[i-1]) {
                dp[i][j] = (dp[i-1][j]) % MOD;
            }
            else {
                dp[i][j] = (dp[i-1][j] + dp[i][j - coins[i-1]]) % MOD;
            }
        }
    }
    
    // for(int i=0;i<n+1;i++) {
    //     for(int j=0;j<x+1;++j) {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return dp[n][x];
}

int32_t main() {
    int n, x;
    cin>>n>>x;
    
    vector<int> coins(n, 0);
    for(auto &a: coins) cin>>a;
    
    cout<<findSolution(n, x, coins);
}