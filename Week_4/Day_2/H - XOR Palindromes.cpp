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
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	#endif
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
	
	string str;
	cin>>str;
	
	int match = 0, not_match = 0, l = 0, r = n-1;
	
	while(l < r){
		if(str[l] == str[r]) match += 2;
		else not_match++;
		l++;r--;
	}
	
	string ans = "";
	for(int i = 0; i <= n; i++){
		int sum = i;
		sum -= not_match;
		
		if(sum < 0){
			ans += '0';
			continue;
		}
		
		sum = max((sum%2),sum-match);
		sum=max(0,sum-(n%2));
		
		if(!sum) ans += '1';
		else ans += '0';
	}
	pans;
}

