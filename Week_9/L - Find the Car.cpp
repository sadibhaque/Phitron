#include "bits/stdc++.h"
using namespace std;

void solve() {
	long long n, k, q;
	cin >> n >> k >> q;

	vector <long long> arr(k + 1), brr(k + 1);
	for (int i = 1; i <= k; i++) cin >> arr[i];
	for (int i = 1; i <= k; i++) cin >> brr[i];

	while (q--) {
		long long x;
		cin >> x;

		int idx = lower_bound(arr.begin(), arr.end(), x) - arr.begin();

		if (arr[idx] == x) cout << brr[idx] << ' ' ;
		else {
			long long a = arr[idx] - arr[idx - 1];
			long long b = brr[idx] - brr[idx - 1];

			cout << brr[idx - 1] + ((x - arr[idx - 1]) * b) / a << ' ';
		}
	}
	cout << '\n';
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
