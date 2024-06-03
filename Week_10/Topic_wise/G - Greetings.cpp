#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"

using namespace std;
using namespace __gnu_pbds;

#ifdef MENDAX
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


void S_1984() {
	int n;
	cin >> n;

	vector <pair <long long, long long>> arr(n);
	pbds <int> p;
	for (auto& [x,y] : arr) {
		cin >> x >> y;
	}

	sort(arr.rbegin(),arr.rend());

	long long ans = 0;
	for (auto& [x,y] : arr) {
		ans += p.order_of_key(y+1);
		p.insert(y);
	}

	cout << ans << '\n';
}

int main() {
#ifndef MENDAX
	ios_base::sync_with_stdio(0); cin.tie(0);
#endif
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1; cin >> t;
	while (t--) S_1984();
	return 0;
}
