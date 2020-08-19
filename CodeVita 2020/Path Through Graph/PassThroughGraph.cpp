// Importing Important Libraries
#include<bits/stdc++.h>

#define int long long
#define int_init(a, b) int a = b;
#define str_init(a, b) string s = b;
#define vi_init(a, n, x) vector<int> a(n, x);
#define vs_init(a, n) vector<string> a(n);
#define endl "\n"
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test_cases int t; cin>>t; while(t--)
#define pb push_back
#define vi vector<int> 
#define vs vector<string>
#define vvi vector<vector<int>>
#define sortAll(a) sort(a.begin(), b.end());
#define MOD 1000000007
#define input(a) cin>>a;
#define output(a) cout<<a;
#define LOOP_INC(i, a, b, space) for(int i=a;i<b;i+=space)
#define LOOP_DEC(i, a, b, space) for(int i=a;i>=b;i-=space)
#define LOOP_ALL(a, b) for(auto a: b)
#define vpii vector<pair<int, int>>
#define umii unordered_map<int, int>
#define umsi unordered_map<string, int>
#define si set<int> 
#define dqi deque<int> 
#define li list<int> 
#define qi queue<int> 
#define input_vector(arr) for(auto &a: arr) cin>>a;

using namespace std;

// Here's the Problem Code for finding the largest Factor
 int FindLargestFactor(int number) {
     
    LOOP_DEC(num, (number/2), 2, 1) {
        if (number % num == 0) {
            return num;
        }
    }
    return 1;
}

// Driver's Code
int32_t main() {
    
    BOOST;

    int_init(n, 0);
    int_init(m, 0);
    input(n); input(m);

    if(n == m)
        cout<<"0";
    else if((n == FindLargestFactor(m) and (m > n)) or ((n > m) and m == FindLargestFactor(n))) {
        cout<<"1";
    }
    else {
        int_init(ans, 0);
        int_init(max_num, max(n, m));
        int_init(min_num, min(n, m));
        bool temp = false;

        while (max_num > 1){
            ans+=1;
            max_num = FindLargestFactor(max_num);
            if (max_num == min_num) {
                temp = true;
                break;
            }
        }
        if (temp == false) {
            while (min_num > 1) {
                min_num = FindLargestFactor(min_num);
                ans+=1;
            }
        }
        cout<<ans;
    }
}
