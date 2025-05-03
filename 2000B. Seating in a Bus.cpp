#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

void fun() {
    int n;
    cin >> n;
    vector<int> v(n + 1), v2(n + 2);
    for (int i = 1; i <= n; i++) cin >> v[i];
    v2[v[1]] = 1;
    bool can_seat = true;
    for (int i = 2; i <= n; i++) {
        v2[v[i]] = 1;
        if (v2[v[i] - 1] == 1  or v2[v[i] + 1] == 1)
            can_seat = true;
        else {
            can_seat = false;
            break;
        }
    }
    if (can_seat)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    optimize();

    int t;
    cin >> t;
    while (t--) {
        fun();
    }

    return 0;
}
