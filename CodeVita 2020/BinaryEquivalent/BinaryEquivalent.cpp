// Importing Important Libraries
#include<bits/stdc++.h>

#define int long long int
#define int_init(a, b) int a = b;
#define str_init(a, b) string value2 = b;
#define vi_init(a, n, x) vector<int> a(n, x);
#define vs_init(a, n) vector<string> a(n);
#define init_inp_vector(arr, n) vi arr(n); input_vector(arr);
#define endl "\n"
#define BOOST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test_cases int temp; cin>>temp; while(temp--)
#define pb push_back
#define vi vector<int> 
#define vs vector<string>
#define vvi vector<vector<int>>
#define sortAll(a) sort(a.begin(), b.end());
#define MOD 1000000007
#define input(a) cin>>a;
#define output(a) cout<<a;
#define LOOP_INC(value, a, b, space) for(int value=a;value<b;value+=space)
#define LOOP_DEC(value, a, b, space) for(int value=a;value>=b;value-=space)
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

void solve(int value, vi &arr1, int size, int value2, int &temp) {

	if(value == size) {
		if(value2 == 0)
		temp++;
		return;
	}
	solve(value+1, arr1, size, arr1[value] + value2,temp);
	solve(value+1, arr1, size, value2, temp);
}

void findSolution(vi arr, int n) {
	int change=0;
	vi arr1(n, 0);


	LOOP_INC(value, 0, n, 1) {
		if(change < arr[value]) change = arr[value];
	}

	int count=0;

	while(change) {
		count++;
		change=change>>1;
	}

	LOOP_INC(value, 0, n, 1) {
		while(arr[value]) {
			if(arr[value] & 1) arr1[value]++;
			arr[value] = arr[value]>>1;
		}
	}

	int value2 = 0;
	LOOP_INC(value, 0, n, 1) {
		arr1[value2] = count - (2*arr1[value]);
		if(!arr1[value2])
			continue;
		else
			value2++;
	}

	int temp=0;
	solve(0, arr1, value2, 0, temp);

	temp -= 1;
	temp = temp * (1<<(n-value2)) + (1+n-value2) - 1;

    vi ansArray(count); 
    int value=0;

    while (temp > 0) { 
        ansArray[value] = temp &1; 
        temp = temp>>1; 
    	value++;
    } 

	LOOP_DEC(value, count-1, 0, 1) cout << ansArray[value]; 
}

int32_t main() {

	// For Input and Output Files
	#ifndef INPUT_ONLINE
		freopen("../../input.txt", "r", stdin);
		freopen("../../output.txt", "w", stdout);
	#endif

	int_init(n, 0);
	input(n);
	init_inp_vector(arr, n);
	findSolution(arr, n);
}