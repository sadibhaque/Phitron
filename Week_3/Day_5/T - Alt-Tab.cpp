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
	//~ cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

void solve(){
	int n;
	cin>>n;
	
	vector <string> lst;
	map <string,int> mp;
	
	for(int i = 0; i < n; i++){
		string str;
		cin>>str;
		
		lst.pb(str);
		mp[str]++;
	}
	
	reverse(all(lst));
	
	string ans = "";
	
	for(auto it : lst){
		int l = it.length();
		if(mp[it] == 1){
			ans += it[l-2];
			ans += it[l-1];
		}
		else if(mp[it] > 1){
			ans += it[l-2];
			ans += it[l-1];
			
			mp[it] = 0;
		}
	}
	
	pans;
}

