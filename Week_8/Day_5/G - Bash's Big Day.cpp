#include "bits/stdc++.h"
using namespace std;

const int N = 100500;

void solve() {
	int n;
	cin >> n;

	vector <int> arr(N);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr[x]++;
	}
	int ans = 1;
	for (int g = 2; g < N; g++) {
		int sum = 0;
		for (int i = g; i < N; i += g) {
			sum += arr[i];
		}
		ans = max(ans, sum);
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
	// cin >> t;
	while (t--) solve();
}
