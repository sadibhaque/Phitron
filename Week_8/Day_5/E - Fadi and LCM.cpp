#include "bits/stdc++.h"
using namespace std;

long long lcm(long long a, long long b) {
	return a / __gcd(a, b) * b;
}

void solve() {
	long long n;
	cin >> n;

	long long ans;
	for (long long i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			if (lcm(i, n / i) == n) {
				ans = i;
			}
		}
	}

	cout << ans << " " << n / ans << endl;
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
