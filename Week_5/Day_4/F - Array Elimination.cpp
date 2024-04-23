#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;

#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pend cout << "\n"
#define pans cout << ans << "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    
    vl arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    vi num(32);
    
    for(int j = 0; j < 31; j++) {
        int bit = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] & (1 << j)) bit++;
        }
        num[j] = bit;
    }

    for(int i = 1; i <= n; i++) {
        int tmp = 0;
        for(int k = 0; k < 31; k++) {
            if (num[k] % i == 0)
                continue;
            else
                tmp++;
        }
        if(tmp == 0) cout << i << " ";
    }
    pend;
}

void testcase() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    testcase();
    return 0;
}
