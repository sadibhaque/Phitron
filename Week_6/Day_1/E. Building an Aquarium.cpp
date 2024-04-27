#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void solve() {
	int n,k;
	cin>>n>>k;

	vi arr(n);
	for(int i = 0; i < n; i++) cin>>arr[i];

	auto check = [&] (int mid){
		ll tmp = 0;
		for(int i = 0; i < n; i++){
			if(arr[i] <= mid){
				tmp += (mid - arr[i]);
			}
		}
		return tmp <= k;
	};

	int l = 1, r = 2e9, mid, ans;
	while(l <= r){
		mid = l + (r - l) / 2;

		if(check(mid)){
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	cout<<ans<<endl;
}

void testCase(){
	int t = 1;

	//

	cin >> t;
	while (t--) solve();
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	testCase();
}
