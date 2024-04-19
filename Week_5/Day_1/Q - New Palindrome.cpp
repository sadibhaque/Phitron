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

void solve(){
	string str;
	cin>>str;
	
	string tmp = str;
	int n = str.length();
	
	bool ans = 0;
	
	for(int i = 1; i < n/2; i++){
		swap(str[i],str[i-1]);
		swap(str[n-i],str[n-i-1]);
		
		if(str != tmp){
			ans = 1;
			break;
		}
	}
	
	if(ans) py;
	else pn;
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
