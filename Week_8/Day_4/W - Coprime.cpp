#include "bits/stdc++.h"
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector <int> arr(n + 1), freq(1001, 0);

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		freq[arr[i]] = i;
	}
	int mx = 0, f = 0;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= 1000; j++) {
			if (freq[i] && freq[j]) {
				if (__gcd(i, j) == 1) {
					mx = max(mx, freq[i] + freq[j]);
					f = 1;
				}
			}
		}
	}

	if (f) cout << mx << endl;
	else cout << -1 << endl;
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
