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

bool cmp1(pair <char,int> a, pair <char,int> b){
	return a.first < b.first;
}
bool cmp2(pair <char,int> a, pair <char,int> b){
	return a.first > b.first;
}

void solve(){
	string str;
	cin>>str;
	
	int n = str.size();
	char l = str[0], r = str[n-1];
	
	int cost = abs(l-r);
	
	vector <pair<char,int>> pos;
	for(int i = 1; i < n-1; i++){
		char ch = str[i];
		
		if(ch <= max(l,r) && ch >= min(l,r)){
			pos.pb({ch,i});
		}
	}
	
	if(l <= r) sort(all(pos));
	else if(l > r) sort(all(pos), greater<pair<char,int>>());
	
	pos.pb({str[n-1],n-1});
	pos.insert(pos.begin(), {str[0],0});
	
	cout<<cost<<" "<<pos.size()<<endl;
	for(auto it : pos) cout<<it.second+1<<" ";pend;
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
