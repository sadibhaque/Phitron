#include "bits/stdc++.h"
using namespace std;

void solve() {
	string str;
	cin >> str;

	int n = str.length();

	int zero = 0, one = 0;
	for (int i = 0; i < int(str.length());  i++) {
		if (str[i] == '0') zero++;
		else one++;
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (str[i] == '0') {
			if (one == 0) {
				sum += n - i;
				break;
			}
			one--;
		}
		else {
			if (zero == 0) {
				sum += n - i;
				break;
			}
			zero--;
		}
	}
	cout << sum << "\n";
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
