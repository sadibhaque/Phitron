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

	long long n, m;
	cin >> n >> m;

	vector <long long> arr(n);

	for (long long i = 0; i < n; i++) {
		cin >> arr[i];
	}

	vector <long long> ans;

	long long l = 0, r = 0;
	pbds <pair<long long, long long>> p;

	while (r < n) {
		p.insert({arr[r], r});
		if (r - l + 1 == m) {
			long long idx = m / 2;
			if (m % 2 == 0) idx--;
			auto med = p.find_by_order(idx);
			ans.push_back(med->first);
			p.erase({arr[l], l});
			l++;
		}
		r++;
	}


	for (auto it : ans) cout << it << " ";
	cout << '\n';
}
