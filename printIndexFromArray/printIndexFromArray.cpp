#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int arr[100][100];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;++j) {
            cin>>arr[i][j];
        }
    }

    int index = 0, row = 0;

    while(row < n) {
        for (int i=0;i<index;++i) {
            cout<<arr[row][i]<<" ";
        }
        cout<<endl;
        row++, index++;
    }
}