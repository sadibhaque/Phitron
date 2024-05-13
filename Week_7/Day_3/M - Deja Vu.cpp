/*
 ░▒▓███████▓▒░ ░▒▓██████▓▒░ ░▒▓███████▓▒░ ░▒▓█▓▒░░▒▓███████▓▒░
░▒▓█▓▒░       ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░
░▒▓█▓▒░       ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░
 ░▒▓██████▓▒░ ░▒▓████████▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓███████▓▒░
       ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░
       ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░
░▒▓███████▓▒░ ░▒▓█▓▒░░▒▓█▓▒░░▒▓███████▓▒░ ░▒▓█▓▒░░▒▓███████▓▒░
*/

#include "bits/stdc++.h"
using namespace std;

void solve() {
	int n, q;
	cin >> n >> q;

	set <int> s[31];
	vector <int> arr(n);

	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		arr[i] = x;
		for (int j = 30; j >= 0; j--) {
			if (x % (1 << j) == 0) {
				s[j].insert(i);
				break;
			}
		}
	}
	while (q--) {
		cin >> x;
		for (int j = x; j <= 30; j++) {
			while (!s[j].empty()) {
				auto it = s[j].begin();
				arr[*it] += (1 << (x - 1));
				s[x - 1].insert(*it);
				s[j].erase(it);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " \n"[i + 1 == n];
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
	cin >> t;
	while (t--) solve();
}
