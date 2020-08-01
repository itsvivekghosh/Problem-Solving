#include<bits/stdc++.h>
using namespace std;

int findSolutionIteratively(int n) {

	if (n == 0) return 0;
	int a=0, b=1, c;

	for(int i=2;i<=n;++i) {
		c = a+b;
		a=b;
		b=c;
	}
	return c;
}

int findSolutionRecursive(int n, int a=0, int b=1) {

	if (n == 0) return a;
	if (n == 1) return b;

	return findSolutionRecursive(n-1, b, a+b);

}

int main() {
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;

		cout<<findSolutionRecursive(n)<<endl;
		cout<<findSolutionIteratively(n)<<endl;
	}
}