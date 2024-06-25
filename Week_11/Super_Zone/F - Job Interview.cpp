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
    int n, m;
    cin >> n >> m;
    int k = n + m + 1;

    vector<int> arr(k), brr(k);
    for (int i = 0; i < k; i++) cin >> arr[i];
    for (int i = 0; i < k; i++) cin >> brr[i];

    vector<int> a, b;
    vector<int> pref(k + 1), x(k + 1), y(k + 1);

    a.push_back(-1);
    b.push_back(-1);
    for (int i = 0; i < k; i++) {
        pref[i + 1] = pref[i] + max(arr[i], brr[i]);
        x[i + 1] = x[i] + arr[i];
        y[i + 1] = y[i] + brr[i];
        if (arr[i] > brr[i]) a.push_back(i);
        else b.push_back(i);
    }
    a.resize(k + 1, k);
    b.resize(k + 1, k);

    for (int i = 0; i < k; i++) {
        if (arr[i] > brr[i]) {
            int p;
            if (a[n] >= i) p = a[n + 1];
            else p = a[n];
            int q = b[m];
            int ans = 0;
            if (p < q) {
                ans += pref[p + 1];
                ans += y[k] - y[p + 1];
                if (i <= p) ans -= arr[i];
                else ans -= brr[i];
            } 
            else {
                ans += pref[q + 1];
                ans += x[k] - x[q + 1];
                if (i <= p) ans -= arr[i];
                else ans -= arr[i];
            }
            cout << ans << " ";
        } 
        else {
            int q;
            if (b[m] >= i) q = b[m + 1]; 
            else q = b[m];
            int p = a[n];
            int ans = 0;
            if (q < p) {
                ans += pref[q + 1];
                ans += x[k] - x[q + 1];
                if (i <= q) ans -= brr[i]; 
                else ans -= arr[i];
            } 
            else {
                ans += pref[p + 1];
                ans += y[k] - y[p + 1];
                if (i <= q) ans -= brr[i]; 
                else ans -= brr[i];
            }
            cout << ans << " ";
        }
    }
    cout << "\n";
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
