#include <bits/stdc++.h>
#define piii pair<int, pair<int, int>>
#define ss second
#define ff first
#define vpiii vector<piii>
using namespace std;

int solve(int n, int sum, vpiii &vals, int blues) {
    if (n==0 or sum == 0) {
        if (blues%2!=0)return INT_MIN;
        return 0;
    }
    if (vals[n-1].ff == 0) {
        if(vals[n-1].ss.ss>sum) {
            return solve(n-1,sum,vals,blues);
        }
        else {
            return max(solve(n-1,sum-vals[n-1].ss.ss,vals,blues)+vals[n-1].ss.ff, solve(n-1,sum,vals,blues));
        }
    }
    else {
        if (vals[n-1].ss.ss>sum){
            return solve(n-1,sum,vals,blues);
        }
        else {
            return max(solve(n-1, sum-vals[n-1].ss.ss,vals,blues+1)+vals[n-1].ss.ff, solve(n-1, sum,vals,blues));
        }
    }
}

int main() {
    int n,w,b=0;
    cin>>n>>w;
    vpiii arr;
    for (int i=0;i<n;i++) {
        int e,m,c;
        cin>>e>>m>>c;
        arr.emplace_back(make_pair(c, make_pair(e,m)));
        if (c==1)b++;
    }
    
    // for (int i=0;i<n;i++) {
    //     cout<<arr[i].ff<<" "<<arr[i].ss.ff<<" "<<arr[i].ss.ss<<endl;
    // }
    cout<<solve(n,w,arr,b);
}