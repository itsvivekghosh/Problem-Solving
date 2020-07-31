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

int findSolution2(vector<int> arr, int n) { // improvement Over O(N^2) algorithm (above solution) but using O(N) space Complexity
    
    vector<int> left(n), right(n);
    int ans=0;
    
    // capturing the highest bar from left to right
    left[0] = arr[0];
    for(int i=1;i<n;++i) {
        left[i] = max(left[i-1], arr[i]);
    }
    
    // capturing the highest bar from right to left
    right[n-1] = arr[n-1];
    for(int i=n-2;i>=0;--i) {
        right[i] = max(right[i+1], arr[i]);
    }
    
    for(int i=0;i<n;++i) {
        ans += (min(left[i], right[i]) - arr[i]);
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
        cout<<findSolution2(arr, n)<<endl;
    }
}