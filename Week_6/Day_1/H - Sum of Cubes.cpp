#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

vl pre;
map <ll,int> mp;
const int N = 1e4;

void solve() {
	ll x;
	cin>>x;

	int ans = 0;
	for(int i = 0; i < N; i++){
		if(pre[i] >= x) break;
		int l = 0, r = N-1, mid;

		while(l <= r){
			mid = l + (r - l) / 2;

			if(pre[mid] == x - pre[i]){
				ans = 1;
				break;
			}
			else if(pre[mid] > x - pre[i]) r = mid - 1;
			else l = mid + 1;
		}

		if (ans) break;
	}

	cout<<(ans ? "YES" : "NO")<<endl;
}

void testCase(){
	int t = 1;

	for(int i = 1; i <= N; i++){
		pre.push_back(pow(i,3));
		mp[pow(i,3)]++;
	}

	cin >> t;
	while (t--) solve();
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	testCase();
}
