#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n=3; 
	cin>>n;
	if (n == 1) {cout<<"1"<<endl; return 0;}

	do {
		cout<<n<<" ";
		if (n % 2 != 0) n = (n*3) + 1;
		else n = n/2;
	} while(n != 1);
	cout<<"1"<<endl;

	return 0;
}