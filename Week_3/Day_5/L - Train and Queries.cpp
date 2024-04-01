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
#define f first
#define s second
#define ins insert
#define sadib main
#define all(x) (x).begin(),(x).end()

void solve(){
	int n,q;
	cin>>n>>q;
	
	vi arr(n);
	map <int, pair<int,int>> mp;
	
	for(int i = 0; i < n; i++){
		cin>>arr[i];
		
		if(mp.find(arr[i]) == mp.end()){
			mp[arr[i]] = {i,i};
		}
		else{
			mp[arr[i]].f = min(mp[arr[i]].f, i);
			mp[arr[i]].s = max(mp[arr[i]].s, i);
		}
	}
	
	while(q--){
		int a,b;
		cin>>a>>b;
		
		bool flg = false;
		
		if(mp.count(a) && mp.count(b) && mp[a].f < mp[b].s){
			flg = true;
		}
		
		
		if(flg)py;
		else pn;
	}
}

int sadib(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
