#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

class ast {
public:
	ll a, b, c;
};

void solve() {
	ll m, n;
	cin >> m >> n;

	vector <ast> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i].a >> arr[i].b >> arr[i].c;
	}


	auto baloon = [&] (ast p1, int mid) {
		ll ans = 0;

		ans += p1.b * (mid / (p1.a * p1.b + p1.c));
		ll rem = mid % (p1.a * p1.b + p1.c);

		if (rem >= (p1.a * p1.b)) ans += p1.b;
		else ans += rem / p1.a;

		return ans;
	};

	auto check = [&] (int mid) {
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			sum += baloon(arr[i], mid);
		}

		return sum >= m;
	};



	ll l = 0, r = INT_MAX, mid, ans = 0;

	while (l <= r) {
		mid = l + (r - l) / 2;

		if (check(mid)) {
			r = mid - 1;
			ans = mid;
		}
		else l = mid + 1;
	}

	cout << ans << endl;

	for (int i = 0; i < n; i++) {
		cout << min(m, baloon(arr[i], ans)) << " ";
		m -= min(m, baloon(arr[i], ans));
	}

	cout << endl;
}

void testCase() {
	int t = 1;

	//

// 	cin >> t;
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
