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
#define pctr cout<<ctr<<"\n"
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
	vector<string> arr(n);
	
	map <string,int> mp;
	
	for(int i = 0; i < n; i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < arr[i].length(); j++){
			string a = arr[i].substr(0,j);
			string b = arr[i].substr(j);
			
			if(mp[a] && mp[b]) mp[arr[i]] = -1;
		}
	}
	
	for(int i = 0; i < n; i++){
		if(mp[arr[i]] == -1){
			cout<<1;
		}
		else cout<<0;
	}
	pend;
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
