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

int max(int a, int b) {
	return (a>b) ? a:b;
}

int findSolution1(int C, int N, vi wt, vi val) {

	if (N == 0 or C == 0) return 0;
	if (wt[N-1] > C) return findSolution1(C, N-1, wt, val);

	return (max(
		findSolution1(C-wt[N-1], N-1, wt, val) + val[N-1],
		findSolution1(C, N-1, wt, val)
	));
}

int findSolution2(int n, int x, vi prices, vi pages) {

	int dp[n+1][x+1];

	LOOP_INC(i, 0, n+1, 1) {
		LOOP_INC(w, 0, x+1, 1) {
			if (i == 0 or w == 0) dp[i][w] = 0;
			else if(prices[i-1] > w) dp[i][w]=dp[i-1][w];
			else {
				dp[i][w] = max(
					pages[i-1] + dp[i-1][w - prices[i-1]],
					dp[i-1][w]
				);
			}
		}
	}

	// LOOP_INC(i, 0, n+1, 1) {
	// 	LOOP_INC(w, 0, x+1, 1) {
	// 		cout<<dp[i][w]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	return dp[n][x];
} 

// Driver's Code
int32_t main() {
	
	BOOST

	// For Input and Output Files
	#ifndef INPUT_ONLINE
		freopen("../input.txt", "r", stdin);
		freopen("../output.txt", "w", stdout);
	#endif

	//Here's the Solution Code
	test_cases {

		int n, x; input(n); input(x);
		vi prices(n); input_vector(prices);
		vi pages(n); input_vector(pages);

		// cout<<findSolution1(x, n, prices, pages)<<endl;
		cout<<findSolution2(n, x, prices, pages)<<endl;

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