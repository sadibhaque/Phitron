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
    
    vector <pair <int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());

    vector <int> ans(k,0);
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = n-1; i >= 0; i--) {
        int y = arr[i].second;
        int x = arr[i].first;

        // mn = min(mn,min(i + 1,y));
        // mx = max(mx, max(i + 1,y));

        mn = min(mn ,y);
        mx = max(mx ,y);

        ans[x-1] = (mx - mn + 1) * 2;
    }

    for (int i = 0; i < k; i++) {
        cout << ans[i] << " ";
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
    printf("Time: %lld ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
#endif
    return 0;
}
