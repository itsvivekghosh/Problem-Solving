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

bool compare(pair<string, int> &video1, pair<string, int> &video2) {

	return (video1.second > video2.second);
}

// Here's the Problem Code
vector<string> findSolution(vector<pair<string, int>> videos, int n) {

	unordered_map<string, int> map;
	vector<string> ans;

	for(auto video: videos) {
		if (map[video.first] < video.second)
			map[video.first] = video.second;
	}

	vector<pair<string, int>> elems(map.begin(), map.end());
	sort(elems.begin(), elems.end(), compare);

	for (auto a: elems) {
		ans.emplace_back(a.first);
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

		int n; cin>>n;
		vector<pair<string, int>> videos;
		for (int i=0;i<n;i++) {
			string name; int views;
			cin>>name>>views;
			videos.push_back(make_pair(name, views));
		}
		vector<string> ans = findSolution(videos, n);
		for(auto a: ans) cout<<a<<" ";
		cout<<endl;
	}

	return 0;
}


/*
g++ program.cpp -o program
./program
*/

/*
Input:
1
20
abc 10
ddc 20
fde 90
gfq 40
uit 88
efd 23
dfv 35
vdf 55
csd 76
dsd 33
cds 56
vdf 56
fvb 78
vdf 45
bfg 34
thy 42 
ytg 80
cdf 32
fde 32
gfq 65
*/

/*
Output: 
fde uit ytg fvb csd gfq cds vdf thy dfv bfg dsd cdf efd ddc abc 
*/