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

bool check(vi arr, int a){
	int l = 0,r = arr.size()-1;
	
	while(l < r){
		if(arr[l] == a) l++;
		else if(arr[r] == a) r--;
		else if(arr[l] != arr[r]) return false;
		else{
			l++;
			r--;
		}
	}
	
	return true;
}

void solve(){
	int n;
	cin>>n;
	
	vi arr(n);
	for(int i = 0; i < n; i++) cin>>arr[i];
	
	if(n <= 2){
		py;
		return;
	}
	
	bool f = true;
	
	for(int i = 0; i < n-i-1; i++){
		if(arr[i] != (arr[n-i-1])){		
			f = check(arr,arr[i]) || check(arr,arr[n-i-1]);
			break;
		}
	}
	
	if(f) py;
	else pn;
	
	//~ for(auto it : tmp) cout<<it<<" ";
	//~ pend;
	//~ for(auto it : a) cout<<it<<" ";
	//~ pend;
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
