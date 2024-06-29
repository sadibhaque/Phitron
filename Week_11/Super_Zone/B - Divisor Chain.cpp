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

    vector <int> arr = {n};
    while (__builtin_popcount(n) > 1) {
        int x = __builtin_ctz(n);
        int tmp = (1 << x);
        n -= tmp;
        arr.push_back(n);
    }

    while (n > 1) {
        n /= 2;
        arr.push_back(n);
    }
    cout << arr.size() << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout <<'\n';
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
#ifndef ONLINE_JUDGE
    printf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
#endif
    return 0;
}
