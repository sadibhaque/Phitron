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
	vector<vi> arr(n+1,vi(n,0));
	vi freq(n+1,0);
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n-1; j++){
			cin>>arr[i][j];
		}
		
	}
	
	for(int i = 1; i <= n; i++){
		freq[arr[i][1]]++;
	}
	
	//~ for(int i = 1; i <= n; i++) cout<<freq[i]<<" ";
	//~ pend;
	
	int mx = -1, elm = -1;
	for(int i = 1; i <= n; i++){
		if(freq[i] > mx){
			mx = freq[i];
			elm = i;
		}
	}
	
	int target = -1;
	
	for(int i = 1; i <= n; i++){
		if(arr[i][1] != elm){
			target = i;
		}
	}
	
	cout<<elm<<" ";
	
	for(int i = 1; i < n; i++){
		cout<<arr[target][i]<<" ";
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
