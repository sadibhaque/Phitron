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
	
	vi arr(n);
	for(int i = 0; i < n; i++) cin>>arr[i];
	
	int a=-1,b=-1,c=-1;
	bool f = 0;
	
	int min_i = 0;
	for(int j = 1; j < n; j++){
		if(arr[j] > arr[min_i]){
			for(int k = j+1; k < n; k++){
				if(arr[k] < arr[j]){
					a = min_i+1;
					b = j+1;
					c = k+1;
					
					f = 1;
					break;
				}
			}
		}
		if(arr[j] < arr[min_i]){
			min_i = j;
		}
		if(f){
			break;
		}
	}
	
	if(f){
		py;
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
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

