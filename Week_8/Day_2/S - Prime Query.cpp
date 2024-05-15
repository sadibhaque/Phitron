#include "bits/stdc++.h"
using namespace std;

template <typename T, typename U> long long max (T x, U y) {return (x > y) ? x : y;}
template <typename T, typename U> long long min (T x, U y) {return (x < y) ? x : y;}
template <typename T, typename U> long long gccd (T a, U b) {while (b != 0) { T t = b; b = a % b; a = t;} return a;}
template <typename T, typename U> long long lccm (T x, U y) {return ((long long)x / gccd((long long)x, (long long)y)) * y;}

void solve() {
	long long n;
	cin >> n;

	vector <long long int> arr(n), one(n), two(n);
	long long   x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == 1) x++;
		if (arr[i] == 2) y++;

		one[i] = x;
		two[i] = y;
	}

	int q;
	cin >> q;

	while (q--) {
		long long  l, r, k;
		cin >> l >> r >> k;

		l--;
		r--;

		long long in1 = one[r];
		long long in2 = two[r];

		if (l > 0) {
			in1 = one[r] - one[l - 1];
			in2 = two[r] - two[l - 1];
		}

		int rem = r - l + 1 - in1 - in2;

		if (in1 > in2) swap(in2, in1);

		int change = min(k, min(rem, in2 - in1));
		in1 += change;
		k -= change;
		rem -= change;

		if (in1 == in2) {
			k = min(k, rem);
			in1 += (k / 2);
			in2 += (k + 1) / 2;
		}
		else {
			long long diff = in2 - in1;
			k = min(k, diff / 2);
			in1 += k;
			in2 -= k;
		}

		cout << in1 * in2 << endl;
	}
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
