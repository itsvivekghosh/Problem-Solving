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
int findSolution(int n, vi &a, vi &b) {

	int total=0;
	int min_a = INT_MAX, min_b = INT_MAX;
	LOOP_INC(i, 0, n, 1) {
		min_a = min(min_a, a[i]);
	}
	LOOP_INC(i, 0, n, 1) {
		min_b = min(min_b, b[i]);
	}

	LOOP_INC(i, 0, n, 1) {
		total += (max(a[i] - min_a, b[i] - min_b)) % MOD;	
	}
	// Write the Solution
	return total;
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
		vi a(n, 0), b(n, 0);
		input_vector(a);
		input_vector(b);

		cout<<findSolution(n, a, b)<<endl;

	}

	return 0;
}


/*
g++ program.cpp -o program
./program
*/

/*
Input:
5
3
3 5 6
3 2 3
5
1 2 3 4 5
5 4 3 2 1
3
1 1 1
2 2 2
6
1 1000000000 1000000000 1000000000 1000000000 1000000000
1 1 1 1 1 1
3
10 12 8
7 5 4

*/

/*
Output
*/