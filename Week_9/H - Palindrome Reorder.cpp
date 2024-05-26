#include "bits/stdc++.h"
using namespace std;

void solve() {
	long long n, k;
	cin >> n >> k;

	vector <long long> arr(n + 1, 0);
	unordered_map <long long, long long> cnt;
	for (long long i = 1; i <= n; i++) {
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}

	cnt[0] = 1;

	long long ctr = 0;
	for (long long i = 1; i <= n; i++) {
		long long need = arr[i] - k;

		if (cnt.find(need) != cnt.end()) {
			ctr += cnt[need];
		}

		cnt[arr[i]]++;
	}

	cout << ctr << '\n';
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
