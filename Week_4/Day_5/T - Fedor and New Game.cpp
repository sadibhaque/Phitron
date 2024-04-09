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
	//~ cin>>t;
	while(t--) solve();
	return 0;
}

void solve(){
	int n,m,k;
	cin>>n>>m>>k;
	
	vi arr(m+1);
	for(int i = 0; i < m+1; i++) cin>>arr[i];
	
	int fedor = arr[m];
	
	int ans = 0;
	for(int i = 0; i < m; i++){
		int ctr = 0;
		for(int j = n; j >= 0; j--){
			if((arr[i] & (1 << j)) != (fedor & (1 << j))){
				ctr++;
			}
		}
		if(ctr <= k) ans++;
	}
	pans;
}

