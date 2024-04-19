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
	int n;
	cin>>n;
	string str;
	cin>>str;
	
	vi code;
	for(int i = n-1; i >= 0; i--){
		if(str[i] == '0'){
			string tmp = "";
			tmp += str[i-2];
			tmp += str[i-1];
			
			int x = stoi(tmp);
			code.pb(('0' + x));
			
			i -= 2;
		}
		else code.pb(str[i]);
	}
	
	//for(auto it : code) cout<<it<<" ";pend;
	
	for(int i = code.size()-1; i >= 0; i--){
		char c = '0' + code[i];
		cout<<c;
	}
	pend;
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

