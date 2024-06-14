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
    int n;
    cin >> n;

    map <int, int> mp;
    for (int i = 0; i < n; i++) {
        int x,y;
        cin >> x >> y;

        mp[x]++;
        mp[y+1]--;
    }

    vector <int> diff;
    for (auto [x,y] : mp) {
        diff.push_back(y);
    }
    
    int mx = INT_MIN;
    for (int i = 1; i < diff.size(); i++) {
        diff[i] += diff[i-1];

        mx = max(mx,diff[i]);
    } 
    cout << mx << endl;
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
