#include <bits/stdc++.h>
#define vi vector<int>
#define int long long
#define MOD 10000007
using namespace std;

int solve(vi &price, int n) {
    
    if (n <= 1)
        return 0;
    int profit=0;
    
    int i=0;
    while (i < n-1) { // 100 180 260 310 40 535 695
        while ((i < n - 1) && (price[i] >= price[i+1])) i++;
 
        if (i == n - 1)
            break;
        int buy = i;
 
        while ((i < n-1) && (price[i] <= price[i+1])) i++;
        int sell = i;
 
        profit += abs(price[sell] - price[buy]) % MOD;
        i++;
    }
    
    return profit;
}

int32_t main() {
    int n,m,k;cin>>n;
    vi arr(n);
    for (auto &a: arr)cin>>a;
    
    cout<<solve(arr, n)<<endl;
}

/*
7
100 180 260 310 40 535 695
*/

// 865 - max_profit