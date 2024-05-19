#include "bits/stdc++.h"
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector <int> arr(n), brr;
	for (auto& it : arr) cin >> it;

	map <int, int> mp;
	for (auto it : arr) mp[it]++;

	int a = 0;
	for (int i = 0; i <= n; i++) {
		if (mp[i] == 0) {
			a = i;
			break;
		}
	}
	int b = 0;
	for (int i = 0; i <= n; i++) {
		if (mp[i] == 1) {
			b = i;
			break;
		}
	}

	int c = 0;
	for (int i = b + 1; i <= n; i++) {
		if (mp[i] <= 1) {
			c = i;
			break;
		}
	}
	cout << min(a, c) << '\n';
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
