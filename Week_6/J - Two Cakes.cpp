#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;

	int l = 1, r = min(a, b), mid, ans;

	auto check = [&] (int mid) {
		int x = a / mid;
		int y = b / mid;

		return x + y >= n;
	};

	while (l <= r) {
		mid = l + (r - l) / 2;

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
