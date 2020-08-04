#include<bits/stdc++.h>
#define int long long
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
#define input_vector(a, arr) for(auto &a: arr) cin>>a;

using namespace std;

// Here's the Problem Code
int findSolution(int n){

	int dp[n+1] = {0};
	dp[0] = 1;

	LOOP_INC(num, 1, n+1, 1) {
		LOOP_INC(dice, 1, 7, 1) {

			if (num < dice) break;
			dp[num] = (dp[num] + dp[num-dice]) % MOD;
		}
	}

	return dp[n];
}

int findMinimumCoins(int n, int m, vi coins) {

	
}

// Driver's Code
int32_t main() {

	BOOST;

	int n; input(n);
	cout<<findSolution(n)<<endl;

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