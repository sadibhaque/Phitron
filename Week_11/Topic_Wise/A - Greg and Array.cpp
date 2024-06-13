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
    int n,m,k;
    cin >> n >> m >> k;

    vector <int> arr(n);
    for (auto& it : arr) cin >> it;

    vector <pair <pair <int, int>, int>> vt(m);
    // vector <int> pref(m);
    for (int i = 0; i < m; i++) {
        int x,y,z;
        cin >> x >> y >> z;
        x--,y--;
        vt[i] = {{x,y},z};
    }

    int a,b;
    vector <int> diff(m+1,0);
    for (int i = 0; i < k; i++) {
        cin >> a >> b;
        a--,b--;

        diff[a]++;
        diff[b+1]--;
    } 

    for (int i = 1; i < m; i++) {
        diff[i] += diff[i-1];
    }

    vector <int> pref(n+1, 0);
    for (int i = 0; i < m; i++) {
        int p = vt[i].first.first;
        int q = vt[i].first.second;
        pref[p] += vt[i].second * diff[i];
        pref[q+1] -= vt[i].second * diff[i];
    }

    for (int i = 1; i < n; i++) {
        pref[i] += pref[i-1];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] + pref[i] << " ";
    }
}

signed main() {
#ifndef MENDAX
    ios_base::sync_with_stdio(0); cin.tie(0);
#endif
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    printf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
#endif
    S_1984();
    return 0;
}
