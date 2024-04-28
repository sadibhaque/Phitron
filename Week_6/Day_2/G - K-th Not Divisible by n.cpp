#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void solve() {
	ll n, k;
	cin >> n >> k;

	ll l = 1, r = 2e18, mid, ans;

	while (l <= r) {
		mid = (l + r) / 2;
		ll tmp = mid - mid / n;

		if (tmp == k) {
			ans = mid;
			r = mid - 1;
		}
		else if (tmp < k) l = mid + 1;
		else r = mid - 1;
	}

	cout << ans << endl;
}

void testCase() {
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
