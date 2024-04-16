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
#define all(x) (x).begin(),(x).end()

void solve(){
	ll n;
	cin>>n;
	
	vl arr(n);
	for(int i = 0; i < n; i++) cin>>arr[i];
	sort(all(arr), greater<ll>());
	
	priority_queue <ll> pq;
	pq.push(arr[0]);
	
	for(int i = 1; i < n; i++){
		if(arr[i] <= pq.top()){
			ll xr = arr[i]^pq.top();
			pq.pop();
			pq.push(xr);
		}
		else pq.push(arr[i]);
	}
	
	cout<<pq.size()<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	int t = 1;
	cin>>t;
	while(t--){solve();}
	return 0;
}
