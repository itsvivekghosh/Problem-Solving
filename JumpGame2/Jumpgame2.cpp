#include<bits/stdc++.h>
using namespace std;

class Solution {
    public: 
        int n;
        vector<int> arr;
        bool ans = true;

        Solution() {
            cin>>n;
            for(int i=0;i<n;i++) {
                int e; cin>>e;
                arr.emplace_back(e);
            }

            findSolution();
        }

        void findSolution();
        ~Solution() {
            if (ans) cout<<"true\n";
            else cout<<"false\n";
        }
};

void Solution::findSolution() {

    for (int i=0;i<n-1;i++) {
        if (arr[i] == 0) {
            bool flag = false;

            for (int j=0;j<i;++j) {
                if (arr[j]+j>i) {flag=true; break;}
            }

            if (!flag) {ans=false; return;}
        }
    }
}

int main() {
    Solution *obj = new Solution();
    delete obj;
}

/*
5
3 2 1 0 4
*/