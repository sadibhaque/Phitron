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
#define f first
#define s second
#define ins insert
#define sadib main
#define all(x) (x).begin(),(x).end()

void solve(){
	int n,k,q;
	cin>>n>>k>>q;
	
	ll x, ans = 0,l = 0;
	
	for(int i = 0; i < n; i++){
		cin>>x;
		if(x > q){
			if(l >= k)ans += (l - k + 1) * (l - k + 2) / 2;
			l = 0;
		}
		else l++;
	}
	if(l >= k)ans += (l - k + 1) * (l - k + 2) / 2;
	
	pans;
}

int sadib(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
