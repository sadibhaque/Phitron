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
	string str;
	cin>>str;
	
	ll mx = 0;
	vl arr;
	for(int i = 0; i < n; i++){
		if(str[i] == 'L'){
			mx += i;
			arr.pb((n-1-i)-i);
		}
		else{
			mx += (n - i - 1);
			arr.pb(i-(n-1-i));
		}
	}
	sort(all(arr),greater<ll>());
	
	for(int i = 0; i < n; i++){
		if(arr[i] > 0) mx += arr[i];
		cout<<mx<<" ";
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
