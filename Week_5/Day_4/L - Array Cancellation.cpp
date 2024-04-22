/* Each conquered bug is a step towards mastery. */
#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
void solve();

#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pend cout<<"\n"
#define pans cout<<ans<<"\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	int t = 1;
	cin>>t;
	while(t--) solve();
	return 0;
}

void solve(){
	int n;
	cin>>n;
	
	vi arr(n);
	int l = -1, r = -1;
	ll ans = 0;
	for(int i = 0; i < n; i++) cin>>arr[i];
	
	for(int i = 0; i < n; i++){
		if(arr[i] > 0){
			l = i;
			break;
		}
		ans += abs(arr[i]);
	}
	
	int x = n;
	while(x--){
		if(arr[x] < 0){
			r = x+1;
			break;
		}
		ans += abs(arr[x]);
	}
	
	ll sum = 0;
	for(int i = l; i < r; i++){
		sum += arr[i];
		if(sum < 0){
			ans += abs(sum);
			sum = 0;
		}
	}
	ans += sum;
	
	ans /= 2;
	pans;
}

