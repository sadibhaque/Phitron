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

    vector <vector <int>> grid(n, vector<int>(m));
    vector <multiset <int>> sets(n);
    for (int i = 0; i < n; i++) {
        int x;
        for (int j = 0; j < m; j++) {
            cin >> x;
            grid[i][j] = x;
            sets[i].insert(x);
        }
        sort(grid[i].begin(), grid[i].end());
    }

    for (int i = 0; i < m; i++) {
        int mn = INT_MAX; int idx;
        auto to_delete = sets[0].begin();
        for (int j = 0; j < n; j++) {
            auto it = sets[j].begin();
            if (*it < mn) {
                mn = *it;
                idx = j;
                to_delete = it;
            }
        }
        sets[idx].erase(to_delete);

        int del = -1;
        for (int i = 0; i < m; i++) {
            if (grid[idx][i] == mn) {
                del = i;
                break;
            }
        }
        swap(grid[idx][i], grid[idx][del]);

        // debug(i,idx,del, mn, *to_delete, grid[idx][del], grid[idx][i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout <<'\n';
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
    printf("Time: %lld ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
#endif
    return 0;
}
