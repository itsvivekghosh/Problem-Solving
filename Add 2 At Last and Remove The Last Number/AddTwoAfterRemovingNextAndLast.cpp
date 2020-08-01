#include<bits/stdc++.h>
using namespace std;

void findSolution(vector<int> arr, int n) {

    for(int i=0;i<n;++i) {
        if (arr[i] != 2) {
            cout<<arr[i]<<" ";
        }
        else {
            cout<<"2 2 ";
            n--;
        }
    }
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
//  23 2 3 12 2 2 34 55 66 79