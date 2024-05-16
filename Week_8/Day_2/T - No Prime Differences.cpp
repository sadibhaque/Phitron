#include "bits/stdc++.h"
using namespace std;

template <typename T, typename U> long long max (T x, U y) {return (x > y) ? x : y;}
template <typename T, typename U> long long min (T x, U y) {return (x < y) ? x : y;}
template <typename T, typename U> long long gccd (T a, U b) {while (b != 0) { T t = b; b = a % b; a = t;} return a;}
template <typename T, typename U> long long lccm (T x, U y) {return ((long long)x / gccd((long long)x, (long long)y)) * y;}

int primeCheck (long long n) {
	for (long long i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return i;
		}
	}
	return n;
}

void solve() {
	long long l, r;
	cin >> l >> r;

	if (r < 4) cout << -1 << endl;
	else {
		if (l < r) {
			if (r % 2 == 0) cout << 2 << " " << r - 2 << endl;
			else cout << 2 << " " << r - 2 - 1 << endl;
		}
		else {
			long long ans = primeCheck(l);

			if (ans != l) cout << ans << " " << l - ans << endl;
			else cout << -1 <<  endl;
		}
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
	cin >> t;
	while (t--) solve();
}
