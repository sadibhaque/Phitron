#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void solve() {
	ll n, k;
	cin >> n >> k;

	vl arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	auto check = [&] (ll key) {
		ll tmp = 0;

		for (int i = 0; i < n; i++) {
			tmp += (key / arr[i]);
			if (tmp >= k) return true;
		}
		return false;
	};

	ll l = 1, r = 1e18, ans, mid;

	while (l <= r) {
		mid = l + (r - l) / 2;

		if (check(mid)) {
			ans = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}

	cout << ans << '\n';
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
