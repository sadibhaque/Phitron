#include "bits/stdc++.h"
using namespace std;

void solve() {
	string tmp = "bbaa", str;
	for (int i = 0; i < 240000 + 10; i++) {
		str += tmp;
	}

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << str[i];
	}
	cout << '\n';
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
