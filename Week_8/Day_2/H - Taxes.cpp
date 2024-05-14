#include "bits/stdc++.h"
using namespace std;

template <typename T, typename U> long long max (T x, U y) {return (x > y) ? x : y;}
template <typename T, typename U> long long min (T x, U y) {return (x < y) ? x : y;}
template <typename T, typename U> long long gccd (T a, U b) {while (b != 0) { T t = b; b = a % b; a = t;} return a;}
template <typename T, typename U> long long lccm (T x, U y) {return ((long long)x / gccd((long long)x, (long long)y)) * y;}

bool primeCheck (long long n) {
	for (long long i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void solve(int t) {
	long long n;
	cin >> n;

	if (primeCheck(n)) cout << 1 << endl;
	else if (n % 2 == 0) cout << 2 << endl;
	else {
		if (primeCheck(n - 2)) cout << 2 << endl;
		else cout << 3 << endl;
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
	while (t--) solve(t);
}
