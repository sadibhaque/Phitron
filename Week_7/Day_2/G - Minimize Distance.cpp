#include "bits/stdc++.h"
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;

	vector <int> arr, brr;

	long long mx = INT_MIN;
	for (int i = 0; i < n; i++) {
		long long x;
		cin >> x;

		if (x >= 0) arr.push_back(x);
		else brr.push_back(abs(x));

		mx = max(mx, abs(x));
	}

	sort(arr.begin(), arr.end(), greater <int> ());
	sort(brr.begin(), brr.end(), greater <int> ());

	long long l1 = arr.size(), l2 = brr.size(), ans = 0;
	long long a = 0, b = 0;

	for (int i = 1; i <= l1; i += k) {
		a += arr[i - 1];
	}
	for (int i = 1; i <= l2; i += k) {
		b += brr[i - 1];
	}

	ans = (2 * (a + b)) - mx;

	cout << ans << endl;
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
