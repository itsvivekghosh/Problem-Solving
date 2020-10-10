#include <bits/stdc++.h>

using namespace std;

bool isVowel(char s) {
    if(s=='a' or s=='e' or s=='i' or s=='o' or s=='u' or s=='A' or s=='E' or s=='I' or s=='O' or s=='U') return 1;
    return 0;
}

bool isCHAR(char c) {
    if((c>='A' and c<='Z') or (c>='a' and c<='z')) return 1;
    return 0;
}

bool isConsonent(char c) {
    if(isCHAR(c) and !isVowel(c)) return 1;
    return 0;
}

string findResult (string s1,string s2, string s3) {
    string result="";
    for(auto &s: s1) {
        if (isVowel(s)) {
            s='*';
        }
    }
    
    for (auto &s: s2) {
        if (isConsonent(s)) {
            s='@';
        }
    }
    
    for (auto &s: s3) {
        if(isCHAR(s)){
            s=toupper(s);
        }    
    }
    
    result += s1+s2+s3;
    return result;
}
int main() {
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    
    cout<<findResult(s1, s2, s3)<<endl;
}

/*
how are you
*/

// h*wa@eYOU