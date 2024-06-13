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
    int n, q; 
    cin >> n >> q;
    
    vector <int> arr(n + 2), brr(n + 2);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector <pair <int, int>> qry(q);

    vector <int> diff(n+1,0);
    while (q--) {
        int x, y;
        cin >> x >> y;
        x--,y--;

        qry[qry.size() - 1 - q] = {x,y};

        diff[x]++;
        diff[y+1]--;
    }

    vector <pair <int, int>> vp(n + 1); 
    vp[0] = {diff[0],0};
    for (int i = 1; i < n; i++) {
        diff[i] += diff[i-1];
        vp[i] = {diff[i],i};
    }
    sort(arr.begin(), arr.begin() + n);
    sort(vp.begin(), vp.begin() + n, greater<pair <int, int>>());
    
    for (int i = 0; i < n; i++) {
        brr[vp[i].second] = arr[n-i-1];
    }

    vector <int> pref(n);
    pref[0] = brr[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i-1] + brr[i];
    }
    // debug(pref);

    int sum = 0;
    for (int i = 0; i < qry.size(); i++) {
        int a = qry[i].first;
        int b = qry[i].second;

        if (a == 0) {
            sum += pref[b];
        }
        else {
            sum += pref[b] - pref[a-1];
        }
    }

    cout << sum << '\n';
}

signed main() {
#ifndef MENDAX
    ios_base::sync_with_stdio(0); cin.tie(0);
#endif
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    S_1984();
    return 0;
}
