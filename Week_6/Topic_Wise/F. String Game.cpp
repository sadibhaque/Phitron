#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void solve() {
	string a, b;
	cin >> a >> b;

	int n = a.length(), m = b.length();

	vi arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	auto check = [&] (int mid) {
		unordered_map <int, int> mp;
		for (int i = 0; i < mid; i++) {
			mp[arr[i] - 1]++;
		}

		string tmp = "";
		for (int i = 0; i < n; i++) {
			if (!mp[i]) tmp += a[i];
		}

		// cout << tmp << endl;
		int j = 0;
		for (int i = 0; i < tmp.size(); i++) {
			if (j == m) break;
			if (b[j] == tmp[i]) {
				j++;
			}
		}

		return j == m;
	};

	int l = 0, r = n - m + 1, mid, ans = 0;

	while (l <= r) {
		mid = l + (r - l) / 2;

		if (check(mid)) {
			l = mid + 1;
			ans = mid;
		}
		else r = mid - 1;
	}

	cout << ans << "\n";
}

void testCase() {
	int t = 1;

	//

	// cin >> t;
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
