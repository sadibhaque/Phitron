#include "bits/stdc++.h"
using namespace std;

bool primeCheck (long long n) {
	for (long long i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void solve() {
	int n;
	cin >> n;

	long long x = 1, y = x + n;

	while (!primeCheck(y)) y++;

	long long  z = n + y;

	while (!primeCheck(z)) z++;


	cout << y * z << endl;
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
