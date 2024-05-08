#include "bits/stdc++.h"
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector <int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int mx = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (i > 0 && i < n - 1) {
			int a = abs(arr[i] - arr[i - 1]);
			int b = abs(arr[i] - arr[i + 1]);
			int tmp = max(a, b);
			mx = min(tmp, mx);
		}
		else {
			if (i == 0) {
				mx = min(mx , abs(arr[i] - arr[i + 1]));
			}
			else mx = min(mx , abs(arr[i] - arr[i - 1]));
		}
	}

	cout << mx << '\n';
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
