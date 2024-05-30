#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int xxx; cin >> xxx;
	while (xxx--) {
		int n;
		cin >> n;

		pbds <int> p;
		vector <int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		reverse(arr.begin(), arr.end());

		long long ans = 0;
		for (auto it : arr) {
			p.insert(it);
			ans += p.order_of_key(it);
		}

		cout << ans << '\n';
	}
}
