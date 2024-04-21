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
	int n,k;
	cin>>n>>k;
	
	vi arr(n);
	int x;
	for(int i = 0; i < n; i++){
		cin>>x;
		arr[i] = x + i + 1;
	}

	sort(arr.begin(), arr.end());
	
	int ans = 0, i = 0;
	while(k >= 0 && i < n){
		if(k - arr[i] >= 0){
			k -= arr[i];
			ans++;
			i++;
		}
		else break;
	}
	
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

