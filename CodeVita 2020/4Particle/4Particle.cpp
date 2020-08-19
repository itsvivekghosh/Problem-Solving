// Importing Important Libraries
#include<bits/stdc++.h>

#define int long long
#define flt_init(a, b) int a = b;
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
#define flt double
#define square_root(s, X, y, Z) sqrt(s*(s-X)*(s-Y)*(s-Z))
using namespace std;

// Code to find the Distance 
flt findDistance(flt W, flt X, flt Y, flt Z, flt ARRAY1, flt ARRAY2) {
	return sqrt(pow(ARRAY2 - ARRAY1, 2) + pow(Z - Y, 2) + pow(X - W, 2) * 1.0);
}

// Function to find the area
flt findArea(flt X, flt Y, flt Z ){
	return square_root(((X+Y+Z)/2), X, Y, Z);
}

// Here's the Problem Code
class Solution {

	flt h, a, b, c, d, va, vb, vc, vd, ans1 = 0, ans2 = 0;
	char da, db, dc, dd;

	public:
		Solution() {
			cin>>h>>a>>b>>c>>d>>va>>vb>>vc>>vd;
			cin>>da>>db>>dc>>dd;

			findSolution();
		}

		~Solution() {
			cout<<round(ans1)<<" "<<round(ans2);
		}

		void findSolution() {

			if(da == 'D') va = va * (-1);
			if(db == 'D') vb = vb * (-1);
			if(dc == 'D') vc = vc * (-1);
			if(dd == 'D') vd = vd * (-1);

			flt first = 0, ya = h * (-1);

			flt second = h, yb = h * (-1);
			flt third = h, yc = 0;
			flt forth = 0, yd = 0;

			flt arr[100][4];
			memset(arr, 0, sizeof(flt) * 100 * 4);
			
			arr[0][0] = a;
			arr[0][1] = b;
			arr[0][2] = c;
			arr[0][3] = d;

			for(int i=1;i<100;i++) {

				arr[i][0] = arr[i-1][0] + va;
				arr[i][1] = arr[i-1][1] + vb;
				arr[i][2] = arr[i-1][2] + vc;
				arr[i][3] = arr[i-1][3] + vd;

				if(arr[i][0] > h) arr[i][0] = h;

				if(arr[i][0] < 0) arr[i][0] = 0;
				if(arr[i][1] > h) arr[i][1] = h;
			
				if(arr[i][1] < 0) arr[i][1] = 0;
				
				if(arr[i][2] > h) arr[i][2] = h;
				
				if(arr[i][2] < 0) arr[i][2] = 0;
				
				if(arr[i][3] > h) arr[i][3] = h;
				
				if(arr[i][3] < 0) arr[i][3] = 0;
			}

			flt R[100];
			LOOP_INC(i, 0, 100, 1) R[i] = findDistance(first, second, ya, yb, arr[i][0], arr[i][1]);
		
			flt S[100];
			LOOP_INC(i, 0, 100, 1) S[i] = findDistance(second,third,yb,yc,arr[i][1],arr[i][2]);
			
			flt T[100];
			LOOP_INC(i, 0, 100, 1) T[i] = findDistance(first,third,ya,yc,arr[i][0],arr[i][2]);
			
			flt U[100];
			LOOP_INC(i, 0, 100, 1) U[i] = findDistance(first,forth,ya,yd,arr[i][0],arr[i][3]);
			
			flt V[100];
			LOOP_INC(i, 0, 100, 1) V[i] = findDistance(second,forth,yb,yd,arr[i][1],arr[i][3]); 
			
			flt W[100];
			LOOP_INC(i, 0, 100, 1) W[i] = findDistance(third,forth,yc,yd,arr[i][2],arr[i][3]);

			flt ARRAY1[100];
			LOOP_INC(i, 0, 100, 1) ARRAY1[i] = findArea(R[i],S[i],T[i]);
			
			flt ARRAY2[100];
			LOOP_INC(i, 0, 100, 1) ARRAY2[i] = findArea(U[i],W[i],T[i]);
			
			flt ARRAY3[100];
			LOOP_INC(i, 0, 100, 1) ARRAY3[i] = findArea(R[i],U[i],V[i]);
		
			flt ARRAY4[100];
			LOOP_INC(i, 0, 100, 1) ARRAY4[i] = findArea(S[i],W[i],V[i]);
			

			flt max1 = ARRAY1[0];
			LOOP_INC(i, 0, 100, 1)
				if (max1 < ARRAY1[i]) max1 = ARRAY1[i];
			flt min1 = ARRAY1[0];
			LOOP_INC(i, 0, 100, 1)
			if (min1 > ARRAY1[i]) min1 = ARRAY1[i];
			
			flt max2 = ARRAY2[0];
			LOOP_INC(i, 0, 100, 1)
			if (max2 < ARRAY2[i]) max2 = ARRAY2[i];
			
			flt min2 = ARRAY2[0];
			LOOP_INC(i, 0, 100, 1)
			if (min2 > ARRAY2[i]) min2 = ARRAY2[i];
			
			ans1 = 4 * pow((max1 + max2), 2);
			ans2 = 4 * pow((min1 + min2), 2);
		}
};

// Driver's Code
int32_t main() {
	
	BOOST

	// For Input and Output Files
	#ifndef INPUT_ONLINE
		freopen("../../input.txt", "r", stdin);
		freopen("../../output.txt", "w", stdout);
	#endif

	Solution();

	return 0;
}
