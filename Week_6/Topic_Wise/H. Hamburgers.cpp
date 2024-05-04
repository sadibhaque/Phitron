#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void solve() {
	string str;
	cin >> str;

	ll b, s, c, bp, sp, cp, ruble;
	cin >> b >> s >> c >> bp >> sp >> cp >> ruble;

	ll x = 0, y = 0, z = 0;

	for (auto it : str) {
		if (it == 'B') x++;
		else if (it == 'S') y++;
		else if (it == 'C') z++;
	}

	auto check = [&] (ll mid) {
		ll n_b = mid * x;
		ll n_s = mid * y;
		ll n_c = mid * z;

		ll mfb = (n_b - b) * bp;
		if (mfb < 0) mfb = 0;

		ll mfs = (n_s - s) * sp;
		if (mfs < 0) mfs = 0;

		ll mfc = (n_c - c) * cp;
		if (mfc < 0) mfc = 0;

		ll money = mfb + mfs + mfc;

		return money <= ruble;
	};

	ll l = 0, r = 1e12 + 10000, mid, ans = 0;

	while (l <= r) {
		mid = l + (r - l) / 2;

		if (check(mid)) {
			l = mid + 1;
			ans = mid;
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
