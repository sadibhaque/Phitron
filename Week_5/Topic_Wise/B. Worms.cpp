#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void solve() {
	int n;
	cin >> n;

	vi arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	vl pref(n);
	pref[0] = arr[0];
	for (int i = 1; i < n; i++) {
		pref[i] = pref[i - 1] + arr[i];
	}

	int q, x;
	cin >> q;
	while (q--) {
		cin >> x;

		auto it = lower_bound(pref.begin(), pref.end(), x);
		it++;

		cout << it - pref.begin() << " ";
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
	// cin >> t;
	while (t--) solve();
}
