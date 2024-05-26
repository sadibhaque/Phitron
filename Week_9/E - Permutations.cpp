#include "bits/stdc++.h"
using namespace std;

void solve() {
	long long n;
	cin >> n;

	if (n == 2 || n == 3) cout << "NO SOLUTION\n";
	else {
		for (int i = 1; i <= n; i++) {
			if (!(i & 1)) cout << i << " ";
		}
		for (int i = 1; i <= n; i++) {
			if (i & 1) cout << i << " ";
		}
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
	// cin >> t;
	while (t--) solve();
}
