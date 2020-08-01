#include<bits/stdc++.h>
#define int long long
using namespace std;

bool compare(pair<int, int> x, pair<int, int> y) {

    return x.second < y.second;
}
int findSolution(int n, int m, vector<pair<int, int>> shows, vector<int> values) {

    sort(shows.begin(), shows.end(), compare);

    for(auto a: shows) cout<<a.first<<" "<<a.second<<endl;

    int dp[m], end;
    memset(dp, 0, m);

    for(int end=1;end<=m;++end) {

        dp[end] = dp[end-1];
        for(auto a: shows) {
            dp[end] = max(dp[end], dp[end-1]);
        }
    }

    return dp[m];
}

int32_t main() {

    int t;cin>>t;

    while(t--) {
        int n, m; cin>>n>>m;
        vector<pair<int, int>> shows(n);
        vector<int> values(n);

        for(int i=0;i<n;++i) {
            int x, y;
            cin>>x>>y;
            shows[i] = make_pair(x, y);
        }
        for(auto &a: values)  cin>>a;
        cout<<findSolution(n, m, shows, values);
    }
}
/*
1
5 20
2 3 
6 9 
10 12
12 13
14 17
3 9 10 6 7
*/