#include<bits/stdc++.h>
#define int long long
#define int_init(a, b) int a = b;
#define str_init(a, b) string s = b;
#define vi_init(a, n, b) vector<int> a(n, b)
#define vs_init(a, n) vector<string> a(n)
#define endl "\n"
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test_cases int t; cin>>t; while(t--)
#define pb push_back
#define vi vector<int> 
#define vs vector<string>
#define vvi vector<vector<int>>
#define sortAll(a) sort(a.begin(), b.end());
#define MOD 10000000007
#define input(a) cin>>a;
#define output(a) cout<<a;
#define LOOP_INC(i, a, b, space) for(int i=a;i<b;i+=space)
#define LOOP_DEC(i, a, b, space) for(int i=a;i>b;i-=space)
#define vpii vector<pair<int, int>>
#define umii unordered_map<int, int>
#define umsi unordered_map<string, int>
#define si set<int> 
#define dqi deque<int> 
#define li list<int> 
#define qi queue<int> 
#define input_vector(arr) for(auto &a: arr) cin>>a;

using namespace std;

int findMinimumCoins(int n, int Money, vi coins) {

	vi_init(dp, Money+1, INT_MAX);
	dp[0] = {0};

	LOOP_INC(i, 1, Money+1, 1) { // Money
		LOOP_INC(j, 0, n, 1) { // Coins

			if (coins[j] <= i) {
				int_init(sub_res, dp[i-coins[j]]);

				if (sub_res != INT_MAX and sub_res+1 < dp[i]) {
					dp[i] = sub_res + 1;
				}
			}
		}
	}

	if (dp[Money] == INT_MAX) return -1;
	return dp[Money];
}

// Driver's Code
int32_t main() {

	BOOST

	int n, m; input(n); input(m);
	vi coins(n);

	input_vector(coins);
	cout<<findMinimumCoins(n, m, coins)<<endl;

	return 0;
}


/*
g++ MinimumCoins.cpp -o MinimumCoins
./MinimumCoins
*/

/*
Input
*/

/*
Output
*/