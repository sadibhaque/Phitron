#include "bits/stdc++.h"
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector <int> arr(n), brr;
	map <int, int> mp;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		mp[arr[i]]++;

		if ((mp[arr[i]] > 1 && arr[i] <= n) || arr[i] > n) brr.push_back(arr[i]);
	}

	sort(brr.begin(), brr.end(), greater <int> ());
	int ans = brr.size();

	for (int i = 1; i <= n; i++) {
		if (!mp[i]) {
			if (brr.back() % (brr.back() - i) != i) {
				cout << -1 << '\n';
				return;
			}
			brr.pop_back();
		}
	}

	cout << ans << '\n';
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
