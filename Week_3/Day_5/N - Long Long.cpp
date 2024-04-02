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

void solve(){
	int n;
	cin>>n;
	
	vi arr(n);
	for(int i = 0; i < n; i++) cin>>arr[i];
	
	bool flg  = false;
	ll ctr = 0,sum = 0;
	for(int i = 0; i < n; i++){
		sum += abs(arr[i]);
		if(arr[i] < 0 && !flg){
			flg = true;
			ctr++;
		}
		if(arr[i] > 0) flg = false;
	}
	
	cout<<sum<<" "<<ctr<<endl;
}
