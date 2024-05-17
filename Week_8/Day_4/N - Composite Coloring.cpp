#include "bits/stdc++.h"
using namespace std;

template <typename T, typename U> long long max (T x, U y) {return (x > y) ? x : y;}
template <typename T, typename U> long long min (T x, U y) {return (x < y) ? x : y;}
template <typename T, typename U> long long gccd (T a, U b) {while (b != 0) { T t = b; b = a % b; a = t;} return a;}
template <typename T, typename U> long long lccm (T x, U y) {return ((long long)x / gccd((long long)x, (long long)y)) * y;}

vector <int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

void solve() {
	int n;
	cin >> n;

	vector <int> arr(n), ans;
	map <int, int> mp;
	for (auto it : primes) mp[it] = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ctr = 1;
	for (auto it : arr) {
		for (auto [a, b] : mp) {
			if (it % a == 0) {
				if (mp[a] == 0) {
					mp[a] = ctr++;
				}
				ans.push_back(mp[a]);
				break;
			}
		}
	}
	ctr--;
	cout << ctr << '\n';
	for (auto it : ans) cout << it << " ";
	cout << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	cin >> t;
	while (t--) solve();
}
