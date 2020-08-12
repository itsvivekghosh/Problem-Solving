#include<bits/stdc++.h>
using namespace std;

void giveMeMaxTime(string str) {
    
    if (str[0] == '?' and str[1] != '?') {
        if (str[1] >= '4') str[0] = '1';
        else str[0] = '2';
    }
    else if(str[0] == '?' and str[1] == '?') {
        str[0] = '2';
    }
    
    if (str[1] == '?') {
        if (str[0] == '1' or str[0] == '0') str[1] = '9';
        else str[1] = '3';
    }
    
    if (str[3] == '?') str[3] = '5';
    if (str[4] == '?') str[4] = '9';
    
    cout<<str<<endl;
}

int main() {
    
    /*int t; cin>>t;
    
    while(t--) {
        string s;
        cin>>s;
        
        cout<<findSolution(s)<<endl;
    }*/
    giveMeMaxTime("23:5?");// 23:59
    giveMeMaxTime("2?:22");// 23:22
    giveMeMaxTime("0?:??");// 09:59
    giveMeMaxTime("1?:??");// 19:59
    giveMeMaxTime("?4:??");// 14:59
    giveMeMaxTime("?3:??");// 23:59
    giveMeMaxTime("??:??");// 23:59
    giveMeMaxTime("?4:5?"); //14:59
    giveMeMaxTime("?4:??"); //14:59
    giveMeMaxTime("?3:??"); //23:59
    giveMeMaxTime("23:5?"); //23:59
    giveMeMaxTime("2?:22"); //23:22
    giveMeMaxTime("0?:??"); //09:59
    giveMeMaxTime("1?:??"); //19:59
    giveMeMaxTime("?4:0?"); //14:09
    giveMeMaxTime("?9:4?"); //19:49
}

// Input
/*
5
?4:5?
2?:??
0?:??
23:5?
??:??
*/

// Output:
/*
14:59
23:59
09:59
23:59
23:59
*/