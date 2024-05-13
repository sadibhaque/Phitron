/*
 ░▒▓███████▓▒░ ░▒▓██████▓▒░ ░▒▓███████▓▒░ ░▒▓█▓▒░░▒▓███████▓▒░
░▒▓█▓▒░       ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░
░▒▓█▓▒░       ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░
 ░▒▓██████▓▒░ ░▒▓████████▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓███████▓▒░
       ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░
       ░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒░
░▒▓███████▓▒░ ░▒▓█▓▒░░▒▓█▓▒░░▒▓███████▓▒░ ░▒▓█▓▒░░▒▓███████▓▒░
*/

#include "bits/stdc++.h"
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector <int>  arr(n + 1), brr(n + 1, 0);
	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
		brr[i] = brr[i - 1] + arr[i];
	}
  
	long long t = 0, ans = 0;
	for (int i = 1; i <= n; ++i) {
		if (arr[i] == 0)
			t += brr[i];
	}
  
	ans = t;
	for (int i = 1; i <= n; ++i) {
		long long x = n - i + brr[i] - brr[n] - brr[i - 1];
		if (arr[i] == 0) {
			ans = max(ans, t + x);
		}
		else {
			ans = max(ans, t - x);
		}
	}
  
	cout << ans << '\n';
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
