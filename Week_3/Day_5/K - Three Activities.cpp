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
	
	vector<vector<pair<int,int>>> arr(3,vector<pair<int,int>>(n));
	
	int x;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < n; j++){
			cin>>x;
			arr[i][j] = {x,j};
		}
	}
	
	for(int i = 0; i < 3; i++) sort(all(arr[i]), greater<>());
	
	int ans = 0;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 3; k++){
				pair<int,int> a = arr[0][i], b = arr[1][j], c = arr[2][k];
				
				if(a.s != b.s && b.s != c.s && a.s != c.s){
					ans = max(ans,a.f + b.f + c.f);
				}
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
