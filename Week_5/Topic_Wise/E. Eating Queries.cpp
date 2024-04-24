/* Each conquered bug is a step towards mastery. */
#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;

#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pend cout<<"\n"
#define pans cout<<ans<<"\n"
#define pb push_back
#define all(x) (x).begin(),(x).end()

/*---------------------START-----------------------*/

void solve(){
	int n,q;
	cin>>n>>q;
	
	vi arr(n), pref(n);
	for(int i = 0; i < n; i++) cin>>arr[i];
	sort(all(arr), greater <int>());
	
	pref[0] = arr[0];
	for(int i = 1; i < n; i++){
		pref[i] = pref[i-1] + arr[i];
	}

	while(q--){
		int x;
		cin>>x;
		
		int ans = 0;
		
		auto it = lower_bound(all(pref),x);
		
		ans = (it - pref.begin());
		ans++;
		if(pref[n-1] < x) ans = -1;
		pans;
	}
}

void testcase(){
	int t = 1;
	cin>>t;
	while(t--){solve();}
}

/*----------------------END------------------------*/

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	testcase();
	return 0;
}
