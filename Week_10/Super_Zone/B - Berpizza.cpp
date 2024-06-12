#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"

#pragma GCC optimize("O3")
#define _CRT_SECURE_NO_WARNINGS

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
using pbds = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using qbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

struct cmp {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    }
};


void S_1984() {
    int q;
    cin >> q;

    set<pair<int, int>, cmp> p;
    qbds <pair <int,int>> id;

    int i = 1, x;
    while (q--) {
        cin >> x;

        if (x == 1) {
            int val; cin >> val;
            p.insert({val,i});
            id.insert({i,val});
            i++;
        }
        else if (x == 2) {;
            auto it = id.begin();
            cout << it -> first<< ' ';
            pair <int, int> tmp = {it -> second,it -> first};
            // debug(tmp);
            id.erase(it);
            p.erase(tmp);
        }
        else if (x == 3) {
            auto it = p.begin();    
            cout << it -> second<< ' ';
            pair <int, int> tmp = {it -> second,it -> first};
            // debug(tmp);
            p.erase(it);
            id.erase(tmp);
        }
    }
    cout << '\n';
}

signed main() {
#ifndef MENDAX
    ios_base::sync_with_stdio(0); cin.tie(0);
#endif
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    S_1984();
    return 0;
}
