#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

bool check(vl& arr,ll n, ll mid, ll k){
	ll sum = 0;
	for(int i = (n/2); i < n; i++){
		if(arr[i] < mid) sum += (mid - arr[i]);
	}
	return sum <= k;
}

void solve() {
	ll n,k;
	cin>>n>>k;

	vl arr(n);
	for(int i = 0; i < n; i++) cin>>arr[i];

	sort(arr.begin(), arr.end());
	
	ll l = 1, r = 2e9, mid ,ans;

	while(l <= r){
		mid = l + (r - l) / 2;
		if(check(arr,n,mid,k)){
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}

	cout<<ans<<endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	// cin >> t;
	while (t--) solve();
}
