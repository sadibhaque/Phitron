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
	
	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	pbds <int> p;
	map <int, int> mp;
	reverse(arr.begin(),arr.end());

	long long ans = 0;
	for (int i = 1; i < n; i++) {
		p.insert(arr[i-1]);
		mp[arr[i-1]]++;

		ans += p.order_of_key(arr[i]);
		ans += mp[arr[i]];
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
