// Importing Important Libraries
#include<bits/stdc++.h>

#define int long long int
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
#define LOOP_INC(i, a, b, space) for(long long i=a;i<b;i+=space)
#define LOOP_DEC(i, a, b, space) for(long long i=a;i>b;i-=space)
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
int findSolution(int n, int m, vi coins) {

	vi_init(dp, m+1, 0);

	dp[0] = 1;
 
	LOOP_INC(i, 1, m+1, 1) {
		LOOP_INC(j, 0, n, 1) {
			if(i - coins[j] >= 0) {
				dp[i] = (dp[i] + dp[i - coins[j]]) % MOD;
			}
		}
	}

	return dp[m];
}

// Driver's Code
int32_t main() {

	BOOST

	// Here's the Solution Code
	int n, m; input(n); input(m);
	vi coins(n);
	input_vector(coins);

	cout<<findSolution(n, m, coins)<<endl;

	return 0;
}


/*
g++ CoinCombination1.cpp -o CoinCombination1
./CoinCombination1
*/

/*
Input
*/

/*
Output
*/