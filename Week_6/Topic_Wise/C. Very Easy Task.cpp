#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void solve() {
	ll n, a, b;
	cin >> n >> a >> b;

	ll l = 0, r = INT_MAX, mid, ans;

	auto check = [&] (ll mid) {
		ll tmp = mid - min(a, b);

		ll x = floor(tmp / a);
		ll y = floor(tmp / b);
		if (tmp < 0) return false;

		return x + y >= n - 1;
	};

	while (l <= r) {
		mid = l + (r - l) / 2;

		if (check(mid)) {
			ans = mid;
			r = mid - 1;
		}
		else l = mid + 1;
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
