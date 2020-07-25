#include<bits/stdc++.h>
#define int long long
using namespace std;

class Solution {

    public:
        int n;
        string s, answer;

        void findSolution();
        Solution() {
            cin>>n;
            s = "PAYPALISHIRING";
            findSolution();
        }

};

void Solution::findSolution() {

    int row = 0;
    bool down = true;

    vector<char> ans[n];

    for(auto c: s) {

        ans[row].emplace_back(c);

        if (row == 0) down = true;
        if (row == n-1) down = false;

        if (down) row++;
        else row--;
    }

    for (int i=0;i<n;i++) {
        for(int j=0;j<ans[i].size();++j) {
            // cout << ans[i][j];
            answer+=ans[i][j];
        }
    }

    cout<<answer;
}


int32_t main() {

    int t;
    cin>>t;

    while(t--) {
        Solution *sol = new Solution();
        delete sol;
    }
}