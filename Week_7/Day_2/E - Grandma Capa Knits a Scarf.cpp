#include "bits/stdc++.h"
using namespace std;

void solve() {
	int n;
	cin >> n;
	string str;
	cin >> str;

	int ans = n + 1;

	for (char ch = 'a'; ch <= 'z' ; ch++) {
		int l = 0, r = int(str.size() - 1), ctr = 0;

		while (l <= r) {
			if (str[l] == str[r]) {
				l++;
				r--;
			}
			else if (str[l] == ch) {
				ctr++;
				l++;
			}
			else if (str[r] == ch) {
				ctr++;
				r--;
			}
			else {
				ctr = n + 1;
				break;
			}

		}
		ans = min(ans, ctr);
	}

	if (ans == n + 1) ans = -1;
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
	cin >> t;
	while (t--) solve();
}
