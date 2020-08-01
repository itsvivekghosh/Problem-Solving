#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr) {
    for(auto a: arr) cout<<a<<" ";
    cout<<endl;
}

void findSolution(vector<int> arr, int n) {

    vector<int> leftProduct(n+1, 1), rightProduct(n+1, 1), ans(n);
    for(int i=1;i<=n;++i) {
        leftProduct[i] = leftProduct[i-1] * arr[i-1];
    }
    for(int i=arr.size()-1;i>=0;--i) {
        rightProduct[i] = rightProduct[i+1] * arr[i];
    }
    for(int i=0;i<n;++i) {
        ans[i] = leftProduct[i] * rightProduct[i+1];
    }
    printArray(ans);
}

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> arr(n);
        for(auto &a: arr) cin>>a;

        findSolution(arr, n);
    }
}
/*
2
3
4 1 3
5
1 2 3 4 5
*/