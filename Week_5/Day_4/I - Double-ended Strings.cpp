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
#define all(x) (x).begin(),(x).end()

/*---------------------START-----------------------*/

int substring(string a, string b){
	int n = a.length();
	int m = b.length();
	int ans = 0;
	
	int dp[n+1][m+1];
	
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= m; j++){
			if(i == 0 || j == 0){
				dp[i][j] = 0;
			}
			else if(a[i-1] == b[j-1]){
				dp[i][j] = 1 + dp[i-1][j-1];
				ans = max(ans,dp[i][j]);
			}
			else dp[i][j] = 0;
			
		}
	}
	return ans;
}

void solve(){
	string a,b;
	cin>>a>>b;
	
	int n = a.length();
	int m = b.length();
	
	int sz  = substring(a,b);
	
	int ans = (m+n) - (2*sz);
	pans;
}

void testcase(){
	int t = 1;
	cin>>t;
	while(t--){solve();}
}

/*----------------------END------------------------*/

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	testcase();
	return 0;
}


