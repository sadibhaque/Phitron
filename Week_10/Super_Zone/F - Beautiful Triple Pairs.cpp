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
    
    map <pair<int,int>, int> a,b,c;
    map <tuple<int,int,int>,int> d;

    int ctr = 0;
    
    for (int i = 0; i < n-2; i++) {
        a[{arr[i],arr[i+1]}]++;
        b[{arr[i+1],arr[i+2]}]++;
        c[{arr[i],arr[i+2]}]++;
        d[{arr[i],arr[i+1],arr[i+2]}]++;
    }

    for (auto [x,y] : a) ctr += y * (y-1) / 2;
    for (auto [x,y] : b) ctr += y * (y-1) / 2;
    for (auto [x,y] : c) ctr += y * (y-1) / 2;
    for (auto [x,y] : d) ctr -= y * (y-1) / 2 * 3;

    cout << ctr << "\n";
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
