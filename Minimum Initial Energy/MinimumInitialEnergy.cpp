#include<bits/stdc++.h>
#define int long long
using namespace std;

int findSolution(vector<int> arr, int n) {
    
    int ie = 0, ce = 0;
    bool flag=false;
    
    for(auto i=0;i<n;++i) {
        ce += arr[i];
        
        if (ce <= 0) {
            flag = true;
            ie = ie+abs(ce)+1;
            ce=1;
        }
    }
    
    if (flag) return ie;
    return 1;
}

int32_t main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n; cin>>n;
        vector<int> arr(n);
        
        for(auto &a: arr) cin>>a;
        cout<<findSolution(arr, n)<<endl;
    }
}
/*
1 
5
4 -10 4 4 4
*/
