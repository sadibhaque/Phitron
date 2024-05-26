#include "bits/stdc++.h"
using namespace std;

long long modd (long long x , long long k) {
	return (x % k + k) % k;
}

void solve() {
	long long n;
	cin >> n;

	vector <long long> arr(n), pref(n);
	for (auto& it : arr) cin >> it;

	pref[0] = arr[0];
	for (long long i = 1; i < n; i++) pref[i] = arr[i] + pref[i - 1];

	unordered_map <long long, long long> mp;
	mp[0] = 1;
	for (auto it : pref) mp[modd(it, n)]++;

	long long ans = 0;
	for (auto [a, b] : mp) {
		ans += (b * (b - 1) / 2);
	}

	cout << ans << '\n';

	// for (auto [a, b] : mp) cout << a << " " << b << endl;
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
