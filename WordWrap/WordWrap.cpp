#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long
void printp(int *p, int n) {
    if (p[n] == 1) cout<<p[n]<<" "<<n<<" ";
    else {
        printp(p, p[n]-1);
        cout<<p[n]<<" "<<n<<" ";
    }
}
void solve(int *arr, int n, int m) {
    int space[n+1][n+1] = {0}, ls[n+1][n+1]={0}, c[n+1]={0}, p[n+1]={0};

    for (int i=1;i<n+1;i++) {
        space[i][i] = m - arr[i];
        for (int j=i+1;j<n+1;j++) {
            space[i][j]=space[i][j-1]-arr[j]-1;
        }
    }
    
    
    for (int i=1;i<n+1;i++) {
        for (int j=i;j<n+1;j++) {
            if (space[i][j] < 0) {
                ls[i][j] = INT_MAX;
            }
            else if (j == n and space[i][j] >= 0) {
                ls[i][j]=0;
            }
            else {
                ls[i][j] = space[i][j] * space[i][j];
            }
        }
    }
    
    for (int i=1;i<n+1;i++) {
        for (int j=1;j<n+1;j++) {
            //cout<<ls[i][j]<<" ";
        }
        //cout<<endl;
    }
    //cout<<endl;
    
    c[0]=0;
    for (int i=1;i<n+1;++i) {
        c[i] = INT_MAX;
        for (int j=1;j<=i;++j) {
            if(c[j-1]!=INT_MAX and ls[j][i]!=INT_MAX and c[j-1]+ls[j][i] < c[i]) {
                c[i] = c[j-1]+ls[j][i];
                p[i]=j;
                // cout<<c[i]<<" "<<p[i]<<endl;
            }
        }
    }
    printp(p,n);
    cout<<endl;
}

int32_t main() {
    int t;
    cin>>t;
    while (t--) {
        int n;cin>>n;
        int arr[n+1];
        for (int i=1;i<n+1;++i) cin>>arr[i];
        int m;cin>>m;
        
        solve(arr, n, m);
    }
}