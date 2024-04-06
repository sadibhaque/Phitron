/* Each conquered bug is a step towards mastery. */
#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
void solve();

#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pend cout<<"\n"
#define pans cout<<ans<<"\n"
#define pb push_back
#define f first
#define s second
#define ins insert
#define all(x) (x).begin(),(x).end()

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
    freopen ("input.txt","r",stdin);
    #endif
	int t = 1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

void solve(){
	ll n;
	cin>>n;
	
	vl arr(n);
	for(int i = 0; i < n; i++) cin>>arr[i];
	
	vector<bool> vis(n,0);
	
	ll ans = 0;
	for(int i = 31; i >= 0; i--){
		ll sum = 0;
		for(int j = 0; j < n; j++){
			if(arr[j] & (1 << i) && !vis[j]) sum++;
		}
		for(int j = 0; j < n; j++){
			if(arr[j] & (1 << i) && !vis[j]) vis[j] = 1;
		}
		
		ans += (sum*(sum-1))/2;
	}
	pans;
}
