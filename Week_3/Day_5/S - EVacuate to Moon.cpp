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
	int n,m,h;
	cin>>n>>m>>h;
	
	vl car(n), outlet(m);
	
	for(int i = 0; i < n; i++) cin>>car[i];
	for(int i = 0; i < m; i++) cin>>outlet[i];
	
	sort(all(car), greater<int>());
	sort(all(outlet), greater<int>());
	
	ll ans = 0;
	
	for(int i = 0; i < min(n,m); i++){
		ans += min(car[i], outlet[i]*h);
	}
	
	pans;
}
