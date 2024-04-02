/* Each conquered bug is a step towards mastery. */
#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
void solve();

#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pend cout<<"\n"
#define pans cout<<ans<<"\n"
#define pb push_back
#define f first
#define s second
#define ins insert
#define all(x) (x).begin(),(x).end()

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

vvi graph;
vl ctr;

void dfs(int src, int x){
	if(graph[src].size() == 1 && graph[src][0] == x){
		ctr[src] = 1;
	}
	else{
		for(auto it : graph[src]){
			if(it != x){
				dfs(it,src);
				ctr[src] += ctr[it];
			}
		}
	}
}

void solve(){
	int n;
	cin>>n;
	
	graph.assign(n,vi());
	ctr.assign(n,0);
	
	for(int i = 0; i < n-1; i++){
		int u, v;
        cin>>u>>v;
        u--;
        v--;
        graph[u].pb(v);
        graph[v].pb(u);
 
	}
	
	dfs(0,-1);
	
	int q;
	cin>>q;
	
	for(int i = 0; i < q; i++){
		int x,y;
		cin>>x>>y;
		x--;
		y--;
		
		ll ans = ctr[x] * ctr[y];
		pans;
	}
}
