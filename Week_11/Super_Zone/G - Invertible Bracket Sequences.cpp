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

const int K=25;
const int MAXN = 2e5+5;
int st[MAXN][K + 1];
int logg[MAXN+1];

void initLog() {
    logg[1] = 0;
    for (int i = 2; i <= MAXN; i++) {
        logg[i] = logg[i/2] + 1;
    }
}
 
void build(vector<int>&a) {
    int N = a.size();
    for (int i = 0; i < N; i++) {
        st[i][0] = a[i];
    }

    for (int j = 1; j <= K; j++) {
        for (int i = 0; i + (1 << j) <= N; i++) {
            st[i][j] = max(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);
        }
    }
}

int query(int L, int R) {
    int j = logg[R - L + 1];
    int maxi = max(st[L][j], st[R - (1 << j) + 1][j]);
    return maxi;
}

void S_1984() {
    string str;
    cin >> str;

    int n = str.size();
    vector <int> arr(n+1,0);
    for (int i = 1; i <= n; i++) {
        if (str[i-1] == '(') arr[i] = arr[i-1] + 1;
        else arr[i] = arr[i-1] - 1;
    }
    int ans = 0;
    build(arr);
    map <int, deque<int>> mp;
    for (int i = 0; i <= n; i++) {
        deque <int> &tmp = mp[arr[i]];
        while (tmp.size()) {
            int mx = query (tmp[0],i);
            if (arr[i] - (mx - arr[i]) < 0) tmp.pop_front();
            else break;
        }
        ans += tmp.size();
        mp[arr[i]].push_back(i);
    }
    cout << ans << '\n';
}

signed main() {
    initLog();
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
