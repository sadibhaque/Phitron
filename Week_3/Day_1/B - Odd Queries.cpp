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
#define pctr cout<<ctr<<"\n"
#define pans cout<<ans<<"\n"

#define pb push_back
#define f first
#define s second
#define ins insert
#define sadib main

#define all(x) (x).begin(),(x).end()

void solve(){
	int n,q;
	cin>>n>>q;
	
	vi arr(n);
	vi pref(n);
	
	cin>>arr[0];
	pref[0] = arr[0];
	
	for(int i = 1; i < n; i++){
		cin>>arr[i];
		pref[i] = pref[i-1] + arr[i];
	}
	
	while(q--){
		int ans = 0;
		
		int l,r,k;
		cin>>l>>r>>k;
		
		if(l > 1) ans += pref[l-2];
		
		ans += (pref[n-1] - pref[r-1]);
		
		ans += (k*(r-l+1));

		if(ans%2 == 0) pn;
		else py;
	}
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
