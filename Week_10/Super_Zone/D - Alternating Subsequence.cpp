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
    
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int sum = 0;

    int tmp = arr[0];
    for (int i = 1; i < n; i++) {
        if ((arr[i] < 0 && arr[i-1] > 0 ) || (arr[i] > 0 && arr[i-1] < 0)) {
            sum += tmp;
            tmp = arr[i];
        }
        else tmp = max(tmp,arr[i]);
    }

    sum += tmp;
    cout << sum << '\n';
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
