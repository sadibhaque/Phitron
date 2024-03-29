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

vector<vi> grid(201,vi(201));

int trav(int x, int y, int n, int m){
	int ans = grid[x][y];
	int i = x, j = y;
	
	while(i > 0 && j < m-1){
		i--;
		j++;
		ans += grid[i][j];
	}
	i = x, j = y;
	while(i > 0 && j > 0){
		i--;
		j--;
		ans += grid[i][j];
	}
	i = x, j = y;
	while(i < n-1 && j < m-1){
		i++;
		j++;
		ans += grid[i][j];
	}
	i = x, j = y;
	while(i < n-1 && j > 0){
		i++;
		j--;
		ans += grid[i][j];
	}
	
	return ans;
	
}

void solve(){
	int n,m;
	cin>>n>>m;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>grid[i][j];
		}
	}
	
	int ans = INT_MIN;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			ans = max(ans,trav(i,j,n,m));
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
