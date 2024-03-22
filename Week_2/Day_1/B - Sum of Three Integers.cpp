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
	int n,sum;
	cin>>n>>sum;
	
	int ctr = 0;
	
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= n; j++){
			int k = sum - i - j;
			
			if(k >= 0 && k <= n){
				ctr++;
			}
		}
	}
	
	pctr;
}

int sadib(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	//cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
