#include "bits/stdc++.h"
using namespace std;

void solve() {
	long long a, b;
	cin >> a >> b;

	int f = 1;

	while (1) {
		long long  tmp = __gcd(a, b);

		if (tmp == 1) break;
		b /= tmp;
	}

	if (b == 1) cout << "Yes\n";
	else cout << "No\n";
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
