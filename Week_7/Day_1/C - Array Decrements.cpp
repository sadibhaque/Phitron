#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void solve() {
	int n; cin >> n;
	vi arr(n), brr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < n; i++) cin >> brr[i];

	int mx = 0;
	for (int i = 0; i < n; i++) {
		mx = max(mx , arr[i] - brr[i]);
	}

	int f = 1;
	for (int i = 0; i < n; i++) {
		if (brr[i] != max(arr[i] - mx, 0)) {
			f = 0;
		}
	}


	if (f) cout << "YES\n";
	else cout << "NO\n";
}

void testCase() {
	int t = 1;

	//

	cin >> t;
	while (t--) solve();
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	testCase();
}
