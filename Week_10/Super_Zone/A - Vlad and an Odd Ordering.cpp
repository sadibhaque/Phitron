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
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void S_1984() {
    int a,b;
    cin >> a >> b;

    if (b <= (a/2)) {
        cout << b * 2 - 1 << endl;
    }
    else {
        vector <int> arr;
        while (a) {
            arr.push_back((a+1) / 2);
            a /= 2;
        }

        debug(arr);

        int x = 0, y = 1;
        for (auto it : arr) {
            if (x < b && b <= x + it) {
                cout << y * (2 * (b - x) - 1) << endl;
                return;
            }
            x += it;
            y *= 2;
        }

    }
}

signed main() {
#ifndef MENDAX
    ios_base::sync_with_stdio(0); cin.tie(0);
#endif
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1; cin >> t;
    while (t--) S_1984();
    return 0;
}
