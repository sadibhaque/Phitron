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

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


void S_1984() {
    int n,k,q;
    cin >> n >> k >> q;

    map <int, int> mp;
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        mn = min(mn,x);
        mx = max(mx,y);

        mp[x]++;
        mp[y+1]--;
    }
    vector <int> diff(200001,0);
    for (auto [x,y] : mp) {
        diff[x] = y;
    } 

    for (int i = 0 + 1; i <= 200001; i++) {
        diff[i] += diff[i-1];
    }

    vector <int> pref(200001,0);
    for (int i = 0; i <= 200001; i++) {
        if(diff[i] >= k) {
            pref[i] = pref[i-1] + 1;
        }
        else pref[i] = pref[i-1];
    }

    // for (int i = mn; i <= 200001; i++) {
    //     cout << pref[i] << " " << i << endl;
    // }
    // cout <<'\n';

    while (q--) {
        int x,y;
        cin >> x >> y;

        cout << pref[y] - pref[x-1] << endl;
        // debug(pref[y],pref[x-1],x,y);
    }
}

signed main() {
#ifndef MENDAX
    ios_base::sync_with_stdio(0); cin.tie(0);
#endif
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    S_1984();
#ifndef ONLINE_JUDGE
    printf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
#endif
    return 0;
}
