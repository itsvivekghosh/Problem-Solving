#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int findSolution(vector<int> arr, int len) {

    if (len < 2) return 0;
    int ans=1;
    int maxValue=arr[0], stopper=arr[0];

    for (int i=1;i<len;++i) {
        
        if (i>stopper){ 
            ans++;
            stopper=maxValue;
        }
        maxValue = max(maxValue, arr[i]+i);
    }
    return ans;
}

int32_t main() {
    int t;
    cin>>t;

    while(t--) {

        int n;cin>>n;
        vector<int> arr(n, 0);
        for(auto &a: arr) cin>>a;

        cout<<findSolution(arr, n)<<endl;
    }
}