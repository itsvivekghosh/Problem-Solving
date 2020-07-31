#include<bits/stdc++.h>
using namespace std;

int findSolution1(vector<int> arr, int n) { // in O(n^2) Time Complexity
    
    int left=0, right=0, ans=0;
    
    for(int i=1;i<n-1;++i) {
        
        left = arr[i];
        for(int j=0;j<i;++j) left=max(arr[j], left);
        
        right = arr[i];
        for(int j=i+1;j<n;++j) right=max(arr[j], right);
        
        ans += (min(left, right) - arr[i]);
    }
    
    return ans;
}

int main() {
    int t; cin>>t;
    
    while(t--) {
        int n; cin>>n;
        vector<int> arr(n);
        for(auto &a: arr) cin>>a;
        
        cout<<findSolution1(arr, n)<<endl;
    }
}