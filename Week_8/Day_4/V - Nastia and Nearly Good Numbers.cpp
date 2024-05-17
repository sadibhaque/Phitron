#include "bits/stdc++.h"
using namespace std;

template <typename T, typename U> long long lccm (T x, U y) {return ((long long)x / __gcd((long long)x, (long long)y)) * y;}

void solve() {
	long long a, b;
	cin >> a >> b;

	if (b == 1) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	cout << a << " " << a * b << " " << a * b + a << endl;
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
