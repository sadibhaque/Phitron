/* Each conquered bug is a step towards mastery. */

#include "bits/stdc++.h"
using namespace std;

typedef long long int ll;
typedef long double ld;

typedef pair<int,int> pi;
typedef pair<string,int> ps;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<ld> vd;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<ps> vps;

#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pend cout<<"\n"
#define pctr cout<<ctr<<"\n";
#define psum cout<<sum<<"\n";
#define pans cout<<ans<<"\n";
#define ptmp cout<<tmp<<"\n";

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define ins insert
#define sadib main

#define sortv(x) sort((x).begin(),(x).end())
#define sorta(x,n) sort((x),(x)+(n))
#define revv(x) reverse((x).begin(),(x).end())
#define reva(x,n) reverse((x),(x)+(n))
#define all(x) (x).begin(),(x).end()

void solve(){
    int n;
    cin>>n;

    vector <vector <string>> v;
    map <string,int> mp;


    for(int i = 0; i < 3; i++){
        vector<string> tmp;
        for(int j = 0; j < n; j++){
            string x;
            cin>>x;
            tmp.pb(x);
            mp[x]++;
        }
        v.pb(tmp);
    }

    int arr[] = {0,0,0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            if(mp[v[i][j]] == 1){
                arr[i] += 3;
            }
            if(mp[v[i][j]] == 2){
                arr[i]++;
            }
            if(mp[v[i][j]] > 2){
                arr[i] += 0;
            }
        }
    }

    cout<<arr[0]<<' '<<arr[1]<<' '<<arr[2]<<endl;
}

int sadib(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
