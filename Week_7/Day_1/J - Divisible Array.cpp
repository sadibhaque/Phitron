#include "bits/stdc++.h"
using namespace std;

void solve() {
	int n;
	cin >> n;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int tmp = (i + 1) * 2;
		sum += tmp;

		cout << tmp << ' ';
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
	cin >> t;
	while (t--) solve();
}
