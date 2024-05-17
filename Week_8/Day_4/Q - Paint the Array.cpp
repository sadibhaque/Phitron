#include "bits/stdc++.h"
using namespace std;

void solve() {
	long long n;
	cin >> n;

	vector <long long int> arr(n);
	for (auto& it : arr) cin >> it;

	long long even = 0, odd = 0;
	for (int i = 0; i < n; i += 2) odd = __gcd(odd, arr[i]);
	for (int i = 1; i < n; i += 2) even = __gcd(even, arr[i]);

	int f = 1;
	for (int i = 0; i < n; i += 2) {
		if (arr[i] % even == 0) {
			f = 0;
			break;
		}
	}

	if (f) {
		cout << even << endl;
		return;
	}

	f = 1;
	for (int i = 1; i < n; i += 2) {
		if (arr[i] % odd == 0) {
			f = 0;
			break;
		}
	}

	if (f) {
		cout << odd << endl;
		return;
	}

	cout << 0 << endl;
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
