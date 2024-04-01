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
	int n;
	cin>>n;
	
	vl arr(n);
	map <ll,int> mp;
	
	for(int i = 0; i < n; i++){
		cin>>arr[i];
		++mp[arr[i]];
	}
	
	sort(all(arr));
	
	int ans = 0;
	
	for(int i = 0; i < n; i++){
		int k = arr[i];
		if(mp[k] != 0){
			++ans;
			while(mp[k] > 0){
				--mp[k];
				++k;
			}
		}
	}
	
	pans;
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
