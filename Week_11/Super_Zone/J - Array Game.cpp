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
    int n, k; 
    cin >> n >> k;
    
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    
    int mn = arr[0];
    for (int i = 1; i < n; i++) {
        mn = min({mn, arr[i]-arr[i-1], arr[i]});
    }

    if (k >= 3) cout << 0 << endl;
    else if (k == 1) {
        cout << mn << endl;
    }
    else {
        for (int i = 0; i < n-1; i++) {
            for (int j = i + 1; j < n; j++) {
                int tmp = arr[j] - arr[i];
                int it = lower_bound(arr.begin(), arr.end(),tmp) - arr.begin();
                mn = min(mn, arr[it] - tmp);
                if (it > 0) mn = min(mn, tmp - arr[it - 1]);
            }
        }
        cout << mn << endl;
    }
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
