#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void solve() {
	int n;
	cin >> n;

	string str;
	cin >> str;

	int ctr = 0;
	for (auto it : str) {
		if (it == '1') ctr++;
	}

	if (min(ctr, int (str.length()) - ctr) % 2 == 0) cout << "Ramos\n";
	else cout << "Zlatan\n";
}

void testCase() {
	int t = 1;

	//

	cin >> t;
	while (t--) solve();
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	testCase();
}
