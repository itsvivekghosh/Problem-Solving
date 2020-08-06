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
#define vpii vector<pair<int, int>>
#define umii unordered_map<int, int>
#define umsi unordered_map<string, int>
#define si set<int> 
#define dqi deque<int> 
#define li list<int> 
#define qi queue<int> 
#define input_vector(arr) for(auto &a: arr) cin>>a;

using namespace std;

// Calculating Factorial
int calculateFactorial(int num) {

	if(num == 0) return 1;
	return calculateFactorial(num - 1) * num;
}

int calculateFact(int k, int sum) {

	//Numerator Part
	int num = (sum + (k-1)); // 7
	num = calculateFactorial(num);

	//Denominator Part
	int den = calculateFactorial(sum) * calculateFactorial(k-1);

	int ans=num/den;
	return ans;
}


int findSolution(int n, int k, vi arr) {

	int limit = 1000001;
	int *primeSum = new int[limit]{0};

	// Prime of Seive
	// calculating the primeSum
	LOOP_INC(i, 2, limit, 1) {
		if(primeSum[i] == 0) {
			LOOP_INC(j, i, limit, i) {
				primeSum[j] = (primeSum[j] + i) % MOD;
			}
		}
	}

	int sum = 0;
	LOOP_INC(i, 0, n, 1) {
		sum += (primeSum[arr[i]]) % MOD;
	}

	int ans = calculateFact(k, sum);
	return ans;
}

// Driver's Code
int32_t main() {

	BOOST

	test_cases {

		int n, k, nh; input(k); input(n);
		vi arr(n); input_vector(arr);

		cout<<findSolution(n, k, arr)<<endl;
	}
	return 0;	
}


/*
g++ SubsetOf0s.cpp -o SubsetOf0s
./SubsetOf0s
*/

/*
Input
2
2 3
1 2 6
3 3 
1 2 6
*/

/*
Output: 8, 36
*/

/*
int limit = 1000001;

// Calculating the factorial of (x + (y-1)!)/ (x! * (y-1)!)
int calculate(int x, int y) {

	int numerator = x+y-1;
	int fact = 1;

	LOOP_INC(i, x+1, numerator+1, 1) fact = (fact * i) % MOD;

	int kfact = 1;
	LOOP_INC(i, 1, y, 1) {
		kfact = (kfact * i) % MOD;
	}

	int ans = fact/kfact;
	return ans;
}

// Here's the Problem Code
int findSolution(int n, int k, vi arr) {

	vi primeSum(limit);

	// Calculating the primeSum
	LOOP_INC(i, 2, limit+1, 1) {
		if(primeSum[i] == 0)
			LOOP_INC(j, i, limit+1, i) {
				primeSum[j] = (primeSum[j] + i) % MOD;
			}
	}

	int sum=0;

	LOOP_INC(i, 0, n, 1) {
		sum = (sum + primeSum[arr[i]]) % MOD;
	}

	cout<<sum<<" ";
	int ans = calculate(sum, k);
	return ans;
}
*/