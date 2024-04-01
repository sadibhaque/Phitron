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
#define f first
#define s second
#define ins insert
#define sadib main
#define all(x) (x).begin(),(x).end()

void solve(){
    string s1,s2;
    cin>>s1>>s2;
 
    char a = s1.back();
    char b = s2.back();
 
    int p = s1.length();
    int q = s2.length();
 
    if(s1 == s2) cout<<"=\n";
    else{
        if(a == b){
            if(a == 'L'){
                if(p > q) cout<<">\n";
                else cout<<"<\n";
            }
            else{
                if(p < q) cout<<">\n";
                else cout<<"<\n";
            }
        }
        else if(a < b){
            cout<<">\n";
        }
        else{
            cout<<"<\n";
        }
    }
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
