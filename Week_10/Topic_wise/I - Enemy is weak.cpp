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
using pbds =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void S_1984() {
    int n;
    cin >> n;

    vector<int> arr(n), brr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pbds<int> p, q;
    vector<int> idx(n);
    brr = arr;

    reverse(brr.begin(), brr.end());
    for (int i = 0; i < n; i++) {
        p.insert(brr[i]);
        idx[i] = p.order_of_key(brr[i]);
    }

    debug(idx);

    int ans = 0;
    reverse(idx.begin(), idx.end());
    for (int i = 0; i < n; i++) {
        int tmp = q.size() - q.order_of_key(arr[i]);
        ans += tmp * idx[i];
        q.insert(arr[i]);
    }
    cout << ans << '\n';
}

signed main() {
#ifndef MENDAX
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#endif
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    S_1984();
    return 0;
}
