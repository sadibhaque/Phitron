#include "bits/stdc++.h"
using namespace std;

void solve() {
	long long x, y;
	cin >> y >> x;

	long long mx = max(x, y);
	long long tmp = (mx - 1) * (mx - 1);

	if (mx % 2 == 0) {
		if (x > y) cout << tmp + y << endl;
		else cout << (mx * mx) - x + 1 << endl;
	}
	else {
		if (x > y) cout << (mx * mx) - y + 1 << endl;
		else cout << tmp + x << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	cin >> t;
	while (t--) solve();
}
