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
#define MOD 1000000007
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
	for(int i=1;i<=n;++i) {
		for(int x=1;x<=6;++x) {
			if (x > i) break;
			dp[i] = (dp[i] - dp[i-x])%MOD;
		}
	}

	return dp[n];
}

// Driver's Code
int32_t main() {

	BOOST;

	// Here's the Solution Code
	test_cases{
		int n; input(n);
		cout<<findSolution(n)<<endl;
	}

	getchar();
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