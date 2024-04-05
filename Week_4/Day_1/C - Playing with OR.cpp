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
	int t = 1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

void solve(){
	ll n,k;
	cin>>n>>k;
	
	vl arr(n);
	for(int i = 0; i < n; i++) cin>>arr[i];
	
	int l = 0, r = 0;
	
	ll ans = 0;
	while(r < n){
		if(r - l + 1 == k){
			for(int i = l; i <= r; i++){
				if(arr[i] & 1){
					ans++;
					break;
				}
			}
			l++;
		}
		r++;
	}
	pans;
}

