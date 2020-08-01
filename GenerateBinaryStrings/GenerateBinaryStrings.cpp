#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr, int n) {

    for(int i=0;i<n;++i) cout<<arr[i]<< " ";
    cout<<endl;
}

void findSolution(int n, vector<int> arr, int i=0){

    if (n == i) {printArray(arr, n); return;}
    arr[i] =0;
    findSolution(n, arr, i+1);

    arr[i]=1;
    findSolution(n, arr, i+1);
}

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> arr(n);
        findSolution(n, arr);
    }
}