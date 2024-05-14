#include "bits/stdc++.h"
using namespace std;

template <typename T, typename U> long long max (T x, U y) {return (x > y) ? x : y;}
template <typename T, typename U> long long min (T x, U y) {return (x < y) ? x : y;}
template <typename T, typename U> long long gccd(T a, U b) {while (b != 0) { T t = b; b = a % b; a = t;} return a;}
template <typename T, typename U> long long lccm(T x, U y) {return ((long long)x / gccd((long long)x, (long long)y)) * y;}

void solve() {
	long long n, a, b, p, q;
	cin >> n >> a >> b >> p >> q;

	long long  ans = 0;

	ans += (n / a) * p;
	ans += (n / b) * q;

	long long  overlap = (n / lccm(a, b));

	ans -= min(p, q) * overlap;

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
