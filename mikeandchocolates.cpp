#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ways(ll n) {
    ll w = 0;
    for (ll k = 2; 1*k*k*k <= n; k++) {        
        w += (n / (k * k * k));
    }
    return w;
}
int main() {
    ll m; cin >> m;
    int res = -1;
    ll low = 0, high = 10e15;
    while (low <= high) {
        ll mid = low + (high - low) / 2;

        if (ways(mid) == m) {
            res = mid;
        }
        if (ways(mid) < m) {
            low = mid + 1;
        } else { // equal
            high = mid - 1;
        }
    }
    cout << res;
    return 0;
}