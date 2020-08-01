/*
Given a number N, find the number of ways to represent this number as a sum of 
2 or more consecutive natural numbers.
Examples: 
Input :15 
Output :3
15 can be represented as:
1+2+3+4+5
4+5+6
7+8

Input :10
Output :1
10 can only be represented as:
1+2+3+4
*/

#include<bits/stdc++.h>
using namespace std;
int findSolution(int N) {

    int n=2;
    int count=0;

    while((2*N + n - pow(n, 2)) > 0) {

        float a = (2*N + n - pow(n, 2))/(2*n);
        if (a-int(a) == 0) {
            count++;
        }
        n++;
    }
    return count;
}
int main() {

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        cout<<findSolution(n)<<endl;
    }
}