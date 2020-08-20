#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pair<ll,ll> > vll;
typedef pair<int, int> ii;
typedef pair<ll,ll> pll;
typedef vector<ii> vii;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
typedef map<char,int> mci;
typedef map<char,ll> mcl;

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
	#ifndef INPUT_ONLINE
		freopen("../../input.txt", "r", stdin);
		freopen("../../output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	ll t;
	cin>>t;

	for(int c=1;c<=t;c++)
	{
		ll n,k,p;
		cin>>n>>k>>p;

		ll mat[n][k];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<k;j++)
			{
				cin>>mat[i][j];
			}
		}

		vector<stack<int> > v1;
		for(int i=0;i<n;i++)
		{
			stack<int> st;
			for(int j=k-1;j>=0;j--)
				st.push(mat[i][j]); 

			v1.push_back(st);
		}

		ll ans=0;
		int max_index;
		int max_sum;

		while(p--)
		{
			max_index=-1;
			max_sum=-1;
			for(int i=0;i<n;i++)
			{
				int sum=0;
				stack<int> kt=v1[i];
				int x=p+1;

//trying to take the sum of top p elements of the ith stack. Will consider that stack whose sum is max which means i can potentially get greater elements
				
				while(!kt.empty()&& x--)  
				{							 
					sum+=kt.top();			
					kt.pop();
				}
				if(sum>max_sum)      
				{
					max_sum=sum;
					max_index=i;
				}
			}
			ans+=v1[max_index].top();
			//cout<<ans<<" "<<max_index<<" "<<endl;
			v1[max_index].pop();
		}

		cout<<"Case #"<<c<<": "<<ans<<endl;
	}


	return 0;
}