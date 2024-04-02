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
	int n; cin>>n;
	
	vl arr(n);
	
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	
	if(n == 1){
		cout<<0<<endl;
		return;
	}
	
	ll ans = arr[n-1] - arr[0];

	for(int i = 1; i < n; i++){
		ans = max(ans, arr[i] - arr[0]);
	}
	for(int i = 0; i < n-1; i++){
		ans = max(ans, arr[n-1] - arr[i]);
	}
	for(int i = 1; i < n; i++){
		ans = max(ans, arr[i-1] - arr[i]);
	}
	
	pans;
}

