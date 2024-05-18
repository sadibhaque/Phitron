#include "bits/stdc++.h"
using namespace std;

void solve() {
	int a, b, l;
	cin >> a >> b >> l;

	unordered_set <int> ans;

	int ctr = 0;
	for (int i = 1; i <= l; i *= a) {
		if (l % i == 0) {
			for (int j = 1; j <= l; j *= b) {
				if ((l / i) % j == 0) {
					ans.insert((l / i) / j);
				}
			}
		}
	}

	cout << ans.size() << endl;
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
