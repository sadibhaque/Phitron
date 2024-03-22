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
	int n;
	ll sum;
	cin>>n>>sum;
	
	vi arr(n);
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	
	ll l = 0, r = 0, ans = 0;
	ll tmp = 0;
	
	while(r < n){
		tmp += arr[r];
		if(tmp <= sum){
			ans += (r - l + 1);
		}
		else{
			while(tmp > sum && l < r){
				tmp -= arr[l];
				l++;
			}
			if(tmp <= sum){
				ans += (r - l + 1);
			}
		}
		r++;
	}
	
	pans;
}

int sadib(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
