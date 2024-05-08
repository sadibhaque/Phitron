#include "bits/stdc++.h"
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector <int> arr(n), brr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> brr[i];
	}

	vector <int> tmp = brr;

	sort(tmp.begin(), tmp.end());
	sort(arr.begin(), arr.end());

	bool f = 1;

	for (int i = 0; i < n; i++) {
		if (arr[i] + 1 == tmp[i]) {
			continue;
		}
		else {
			if (arr[i] != tmp[i]) {
				f = 0;
				break;
			}
		}
	}

	if (f) cout << "YES\n";
	else cout << "NO\n";
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
