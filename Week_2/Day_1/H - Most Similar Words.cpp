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
	int n,m;
	cin>>n>>m;
	
	vector<string> vs(n);
	
	for(int i = 0; i < n; i++){
		cin>>vs[i];
	}
	
	sort(all(vs));
	
	string a,b;
	
	int mn = INT_MAX;
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			
			int diff = 0;
			
			for(int k = 0; k < m; k++){
				if(vs[i][k] != vs[j][k]){
					diff += abs((vs[i][k] - vs[j][k]));
				}
			}
			if(diff < mn){
				mn = diff;
				a = vs[i];
				b = vs[j];
			}
		}
	}
	
	int ans = 0;
	
	for(int i = 0; i < m; i++){
		ans += abs(a[i] - b[i]);
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
