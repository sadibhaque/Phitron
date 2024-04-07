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
	
	ll idx = -1, ctr = 0;
		
	for(int i = 31; i >= 0; i--){
		ll bit = (1ll << i);	
		if(n & bit){
			ctr++;
			if(ctr == 2){
				idx = i;
				break;
			}
		}
	}
	
	ll ans = 0;
	for(int i = idx; i >= 0; i--){
		if((n & (1 << i)) == 0) ans++;
	}
	
	ans = (1 << ans);

	pans;
}
