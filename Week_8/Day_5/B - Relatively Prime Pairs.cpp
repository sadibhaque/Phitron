#include "bits/stdc++.h"
using namespace std;

long long lcm(long long a, long long b) {
	return a / __gcd(a, b) * b;
}

void solve() {
	long long l, r;
	cin >> l >> r;
	for (long long i = l; i <= r; i += 2) {
		long long j = i + 1;
		if (__gcd(i, j) != 1) {
			cout << "NO" ;
			return;
		}
	}
	cout << "YES" << endl;
	for (long long i = l; i <= r; i += 2) {
		cout << i << " " << i + 1 << endl;
	}
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
