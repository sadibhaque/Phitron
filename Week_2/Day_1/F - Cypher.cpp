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
	
	vi arr(n);
	vector<pair<int,string>> vp(n);
	
	for(int i = 0; i < n; i++) cin>>arr[i];
	
	for(auto& it : vp){
		cin>>it.f>>it.s;
	}
	
	for(int i = 0; i < n; i++){
		string str = vp[i].s;
		for(int j = 0; j < vp[i].f; j++){
			char c = str[j];
			if(c == 'D'){
				if(arr[i] == 9){
					arr[i] = 0;
				}
				else arr[i]++;
			}
			else if(c == 'U'){
				if(arr[i] == 0){
					arr[i] = 9;
				}
				else arr[i]--;
			}
		}
	}
	
	for(auto it : arr) cout<<it<<" ";
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
