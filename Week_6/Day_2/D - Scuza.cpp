#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void solve() {
	int n, q;
	cin >> n >> q;

	vl arr(n + 1);
	for (int i = 1; i <= n; i++) cin >> arr[i];

	vl pre(n + 1), mx(n + 1);
	for (int i = 1; i <= n; i++) {
		pre[i] = pre[i - 1] + arr[i];
		mx[i] = max(mx[i - 1], arr[i]);
	}

	int x;
	while (q--) {
		cin >> x;

		auto it = upper_bound (mx.begin(), mx.end(), x);

		int ans = it - mx.begin() - 1;

		if (ans >= 0) cout << pre[ans] << " ";
		else cout << 0 << " ";
	}
	cout << '\n';
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
