#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"

using namespace std;
using namespace __gnu_pbds;

#ifdef MENDAX
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

#define int long long
#define lcm(a, b) ((a * b) / __gcd(a, b));

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


void S_1984() {
    int n; 
    cin >> n;
    string str;
    cin >> str;
    
    int n1 = 0, n2 = 0, s1 = 0, s2 = 0, e1  =0, e2 = 0, w1 = 0, w2 = 0;
    string ans  = "";

    for (auto it : str) {
        if (it == 'N') {
            if (n1 <= n2) {
                n1++;
                ans += 'R';
            }
            else {
                n2++;
                ans += 'H';
            }
        }
        if (it == 'S') {
            if (s1 <= s2) {
                s1++;
                ans += 'R';
            }
            else {
                s2++;
                ans += 'H';
            }
        }
        if (it == 'E') {
            if (e2 <= e1) {
                e2++;
                ans += 'H';
            }
            else {
                e1++;
                ans += 'R';
            }
        }   
        if (it == 'W') {
            if (w2 <= w1) {
                w2++;
                ans += 'H';
            }
            else {
                w1++;
                ans += 'R';
            }
        }
    }

    // debug(n1,n2,s1,s2,e1,e2,w1,w2);

    if (((n1+s1+e1+w1)==0) || ((n2+s2+e2+w2)==0)) {
        cout << "NO\n";
        return;
    }
 
    int mn = min(n1, s1);
    n1 -= mn; s1 -= mn;
 
    mn = min(e1, w1);
    e1 -= mn; w1 -= mn;
 
    mn = min(n2, s2);
    n2 -= mn; s2 -= mn;
 
    mn = min(e2, w2);
    e2 -= mn; w2 -= mn;
 
    if ((w1!=w2) || (e1!=e2) || (s1!=s2) || (n1!=n2)) {
        cout << "NO\n";
    }
    else cout << ans << '\n';
}

signed main() {
#ifndef MENDAX
    ios_base::sync_with_stdio(0); cin.tie(0);
#endif
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    int t = 1; cin >> t;
    while (t--) S_1984();
    return 0;
}
