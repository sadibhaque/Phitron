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

    bool cmp (string a, string b) {
        return a.length() < b.length();
    }

    void S_1984() {
        int n; 
        cin >> n;

        vector <string> arr(n);
        map <pair <int, int>, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), cmp);
        int ctr = n;
        for (int i = 0; i < n; i++) {
            int l = arr[i].length();
            for (int j = 1; j <= l; j++) {
                if ((l + j) % 2 != 0) continue;
                int mid = (l + j) / 2;
                int need = 0;
                for (int k = 0; k < mid; k++) need += arr[i][k] - '0';
                for (int k = mid; k < l; k++) need -= arr[i][k] - '0';
                
                // debug(need,l);
                if (need >= 0) ctr += mp[{need,j}];
            }
            reverse(arr[i].begin(), arr[i].end());
            for (int j = 1; j <= l; j++) {
                if ((l + j) % 2 != 0) continue;
                int mid = (l + j) / 2;
                int need = 0;
                for (int k = 0; k < mid; k++) need += arr[i][k] - '0';
                for (int k = mid; k < l; k++) need -= arr[i][k] - '0';
                
                // debug(need,l);
                if (need >= 0) ctr += mp[{need,j}];
            }

            int sum = 0;
            for (int j = 0; j < arr[i].length(); j++) {
                sum += arr[i][j] - '0';
            }
            mp[{sum,arr[i].length()}]++;
        }
        cout << ctr << '\n';
    }

    signed main() {
    #ifndef MENDAX
        ios_base::sync_with_stdio(0); cin.tie(0);
    #endif
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
        S_1984();
    #ifndef ONLINE_JUDGE
        printf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif
        return 0;
    }
