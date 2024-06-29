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
    int a,b,tmp;
    cin >> a >> b;

    if (b < a) cout << "NO\n";
    else {
        if (a == 1) {
            cout << "YES\n";
            cout << b << " ";
        }
        else {
            if (a % 2 == 0 && b % 2 == 0) {
                cout << "YES\n";
                for (int i = 1; i <= a - 2; i++) {
                    cout << 1 << " ";
                    b--;
                }
                cout << b / 2 << " " << b / 2 << " ";
            }
            else if (a % 2 == 0 && b % 2 != 0) {
                cout << "NO\n";
            }
            else if (a % 2 != 0 && b % 2 == 0) {
                cout << "YES\n";
                for (int i = 1; i <= a - 1; i++) {
                    cout << 1 << " ";
                    b--;
                }
                cout << b << " ";
            }
            else if (a % 2 != 0 && b % 2 != 0) {
                cout << "YES\n";
                for (int i = 1; i <= a - 1; i++) {
                    cout << 1 << " ";
                    b--;
                }
                cout << b << " ";
            }
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
    printf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
#endif
    return 0;
}
