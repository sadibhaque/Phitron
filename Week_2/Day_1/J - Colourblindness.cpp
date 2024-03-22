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
	string str1, str2;
	cin>>str1>>str2;
	
	bool flg = true;
	
	for(int i = 0; i < n; i++){
		if(str1[i] != str2[i]){
			if(str1[i] == 'R' || str2[i] == 'R'){
				flg = false;
				break;
			}
		}
	}
	
	if(flg) yes;
	else no;
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
