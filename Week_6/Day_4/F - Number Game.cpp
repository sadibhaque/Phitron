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

	auto check = [&] (int mid) {
		multiset <int> s;
		for (auto ch : arr) {
			s.insert(ch);
		}
		for (int i = 1; i <= mid; i++) {
			if (s.empty()) return false;

			auto it = s.upper_bound(mid - i + 1);
			if (it == s.begin()) return false;
			it--;
			s.erase(it);

			if (!s.empty()) {
				it = s.begin();
				int tmp = (*it);
				tmp += (mid - i + 1);
				s.erase(it);
				s.insert(tmp);
			}
		}
		return true;
	};

	int l = 0, r = n, mid, ans;

	while (l <= r) {
		mid = l + (r - l) / 2;

		if (check(mid)) {
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
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
