#include "bits/stdc++.h"
using namespace std;

void solve() {
	long double x, y;
	cin >> x >> y;

	long double a = y * log(x);
	long double b = x * log(y);

	if (a == b) cout << '=' << endl;
	else if (a < b) cout << '<' << endl;
	else cout << '>' << endl;
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
