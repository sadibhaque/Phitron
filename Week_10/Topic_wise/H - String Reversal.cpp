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

	int n;
	cin >> n;
	string str;
	cin >> str;

	string a = str;
	reverse(a.begin(), a.end());

	map <char, vector <int>> mp1, mp2;
	for (int i = 0; i < n; i++) {
		mp1[str[i]].push_back(i);
		mp2[a[i]].push_back(i);
	}

	vector <int> idx(n);

	for (char i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < (int) mp1[i].size(); j++) {
			idx[mp2[i][j]] = mp1[i][j];
		}
	}

	reverse(idx.begin(), idx.end());

	pbds <int> p;
	long long ans = 0;
	for (auto it : idx) {
		ans += p.order_of_key(it);
		p.insert(it);
	}

	cout << ans << '\n';
}
