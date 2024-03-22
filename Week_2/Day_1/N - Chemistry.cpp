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
	string str;
	cin>>str;
	
	vi freq(26,0);
	
	for(auto it : str){
		freq[it-'a']++;
	}
	
	int odd = 0, even = 0;
	for(auto it : freq){
		if(it % 2 == 0){
			even++;
		}
		else odd++;
	}
	odd--; 
	
	if(odd <= m && m <= n)py;
	else pn;
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
