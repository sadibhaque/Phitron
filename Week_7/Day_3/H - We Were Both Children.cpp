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

#define ll long long

void solve() {
	int n;
	cin >> n;

	unordered_map <int, int> mp;

	ll x;
	for (ll i = 0; i < n; i++) {
		cin >> x;

		if (x <= n) {
			mp[x]++;
		}
	}

	ll  mx = 0;

	for (ll i = 1; i <= n; i++)  {
		ll ctr = 0;
		for (ll j = 1; j * j <= i; j++)  {

			if (i % j == 0) {
				ctr += mp[j];
				if (j * j != i) {
					ctr += mp[i / j];
				}
			}
		}
		mx = max(ctr, mx);
	}

	cout << mx << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("e.txt", "w", stderr);
#endif
	int t = 1;
	cin >> t;
	while (t--) solve();
}
