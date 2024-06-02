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
	long long n, k; 
	cin >> n >> k;
	
	vector <long long> arr(n);
	for (long long i = 0; i < n; i++) {
		cin >> arr[i];
	}

	pbds <long long> p; 
	for (int i = 0; i < k; i++) {
		p.insert(arr[i]);
	}

	long long pre_mid = *p.find_by_order((k+1)/2 -1);

	long long ans = 0;

	for (int i = 0; i < k; i++) {
		ans += abs(arr[i] - pre_mid);
	} 

	cout << ans << " ";

	for (int i = 0; i < n - k; i++) {
		p.erase(p.find_by_order(p.order_of_key(arr[i])));
		p.insert(arr[i+k]);

		long long mid = *p.find_by_order((k+1)/2 -1);

		ans += abs(mid - arr[i+k]) - abs(pre_mid - arr[i]);

		if(!(k & 1)) ans -= mid - pre_mid;
		pre_mid = mid;

		cout << ans << " ";
	}
	cout << '\n';
}

int main() {
#ifndef MENDAX
	ios_base::sync_with_stdio(0); cin.tie(0);
#endif
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	S_1984();
	return 0;
}
