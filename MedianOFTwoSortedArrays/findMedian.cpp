#include<bits/stdc++.h>
using namespace std;

class Solution {

    public:
        double findSolution(vector<double> arr1, vector<double> arr2) {
            
            int s1=arr1.size(), s2=arr2.size(), i;

            vector<double> arr(s1+s2);

            for(i=0;i<s1;++i) {
                arr[i] = arr1[i];
            }

            for(int j=0;j<s2;++j) {
                arr[i++] = arr2[j];
            }
            sort(arr.begin(), arr.end());
            double ans=0;

            if ((s1+s2)%2 == 0) {
                int mid = (s1+s2)/2;
                ans = (arr[mid-1]+arr[mid])/2;
            }
            else {
                int mid = (s1+s2)/2;
                ans = arr[mid];
            }

            return ans;
        }
};
int main(void) {
    int t; cin>>t;

    while(t--) {
        int n, m; cin>>m>>n;
        vector<double> arr1(m), arr2(n);

        for(auto &a: arr1) cin>>a;
        for(auto &a: arr2) cin>>a;

        cout<<Solution().findSolution(arr1, arr2)<<endl;
    }
}