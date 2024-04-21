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
	int b,g;
	cin>>b;
	vi boy(b);
	for(int i = 0; i < b; i++) cin>>boy[i];
	cin>>g;
	vi girl(g);
	for(int i = 0; i < g; i++) cin>>girl[i];
	
	sort(all(boy));
	sort(all(girl));
	
	int x = 0, y = 0, ans = 0;
	
	while(x < b && y < g){
		int tmp = abs(boy[x] - girl[y]);
		if(tmp == 0 || tmp == 1){
			ans++;
			x++;
			y++;
		}
		else{
			if(boy[x] < girl[y]) x++;
			else y++;
		}
	}
	
	pans;
}

void testcase(){
	int t = 1;
	//cin>>t;
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
