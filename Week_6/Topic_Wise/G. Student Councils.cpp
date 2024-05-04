#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void solve() {
	int k, n;
	cin >> k >> n;

	vl arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	auto check = [&] (ll mid) {
		ll sum = 0;

		for (int i = 0; i < n; i++) {
			sum += min(mid, arr[i]);
		}

		return sum >= mid * k;
	};

	ll l = 0, r = 50e9, mid, ans;

	while (l <= r) {
		ll mid = l + (r - l) / 2;

		if (check(mid)) {
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}

	cout << ans << endl;
}

void testCase() {
	int t = 1;

	//

	// cin >> t;
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
