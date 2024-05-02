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
	sort(arr.begin(), arr.end());

	int l = 0, r = 1e9, mid, ans = 0;

	auto check = [&] (int mid) {
		int left = 0, ctr = 1;

		for (int j = 0; j < n; j++) {
			if (arr[j] - arr[left] > 2 * mid) {
				ctr++;
				left = j;
			}
		}

		return ctr <= 3;
	};

	while (l <= r) {
		mid = l + (r - l) / 2;

		if (check(mid)) {
			ans = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}

	cout << ans << endl;
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
