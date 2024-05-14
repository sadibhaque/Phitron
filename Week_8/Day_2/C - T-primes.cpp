#include "bits/stdc++.h"
using namespace std;

template <typename T, typename U> long long max (T x, U y) {return (x > y) ? x : y;}
template <typename T, typename U> long long min (T x, U y) {return (x < y) ? x : y;}
template <typename T, typename U> long long gccd(T a, U b) {while (b != 0) { T t = b; b = a % b; a = t;} return a;}
template <typename T, typename U> long long lccm(T x, U y) {return ((long long)x / gccd((long long)x, (long long)y)) * y;}

template <typename T, typename U> void sieve(vector<T>& prime, U n) {
	prime.resize(n + 1, true);
	for (U i = 2; i * i <= n; i++) {
		if (prime[i]) {
			for (U j = i * i; j <= n; j += i) {
				prime[j] = false;
			}
		}
	}

	prime[1] = 0;
}

template<typename T> void primeFactor(T n, map<T, int>& mp) {
	for (T i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			while (n % i == 0) {
				mp[i]++;
				n /= i;
			}
		}
	}
	if (n > 1) mp[n]++;
}

bool squareCheck (long long  n) {
	return (long long) sqrt(n) * (long long) sqrt(n) == n;
}

void solve() {
	int n;
	cin >> n;

	vector <long long  > arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	vector <bool> prime;
	long long  x = 10000000;
	sieve(prime, x);

	for (int i = 0; i < n; i++) {
		if ( prime[sqrt(arr[i])] && squareCheck(arr[i])) cout << "YES\n";
		else cout << "NO\n";
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
	// cin >> t;
	while (t--) solve();
}
