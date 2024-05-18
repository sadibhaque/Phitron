#include "bits/stdc++.h"
using namespace std;

void solve() {
	int n;
	cin >> n;

	int f = true, x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		int ans = false;
		for (int j = i + 2; j >= 2; j--) {
			if (x % j) {
				ans = true;
				break;
			}
		}
		f &= ans;
	}
	if (f) cout << "YES\n";
	else cout << "NO\n";
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
