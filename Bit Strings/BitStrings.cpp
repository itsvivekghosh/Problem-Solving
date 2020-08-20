// Importing Important Libraries
#include<bits/stdc++.h>

#define int long long
#define int_init(a, b) int a = b
#define str_init(a, b) string s = b
#define vi_init(a, n, x) vector<int> a(n, x)
#define vs_init(a, n) vector<string> a(n)
#define endl "\n"
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test_cases int t; cin>>t; while(t--)
#define pb push_back
#define vi vector<int> 
#define vs vector<string>
#define vvi vector<vector<int>>
#define sortAll(a) sort(a.begin(), a.end())
#define MOD 1000000007
#define input(a) cin>>a
#define output(a) cout<<a
#define LOOP_INC(i, a, b, space) for(int i=a;i<b;i+=space)
#define LOOP_DEC(i, a, b, space) for(int i=a;i>b;i-=space)
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

// Here's the Problem Code
int findSolution(int n) {

	int ans = 1;
	int num = 2;
	num %= MOD;

	while(n) {
		if (n & 1) {
			ans = (ans * num) % MOD;
		}
		n >>= 1;
		num = (num * num) % MOD;
	}

	return ans;
}

// Driver's Code
int32_t main() {
	
	BOOST

	// For Input and Output Files
	#ifndef INPUT_ONLINE
		freopen("../input.txt", "r", stdin);
		freopen("../output.txt", "w", stdout);
	#endif

	// Here's the Solution Code
	test_cases {

		int n; input(n);
		cout<<findSolution(n)<<endl;

	}

	return 0;
}


/*
g++ program.cpp -o program
./program
*/

/*
Input
*/

/*
Output
*/