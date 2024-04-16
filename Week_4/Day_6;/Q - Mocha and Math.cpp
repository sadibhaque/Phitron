/* Each conquered bug is a step towards mastery. */
#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;

#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pend cout<<"\n"
#define pans cout<<ans<<"\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()

/*---------------------START-----------------------*/

void solve(){
	int n;
	cin>>n;
	
	vi arr(n);
	int mn = INT_MAX;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
		if(arr[i] < mn) mn = arr[i];
	}
	
	for(int i = 0; i < n; i++){
		if (arr[i] != mn){
			mn &= arr[i];
		}
	}
	
	int ans = mn;
	pans;
}

void testcase(){
	int t = 1;
	cin>>t;
	while(t--){solve();}
}

/*----------------------END------------------------*/

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	testcase();
	return 0;
}
