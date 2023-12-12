#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t; cin >> t;
    while (t--) {
        ll n, h; cin >> n >> h;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll low = 1, high = h + 1;

        while (low <= high) {
            ll mid = low + (high - low) / 2;
            
            ll damage = 0;
            for (int i = 0; i < n - 1; i++) {
                if (a[i] + mid > a[i + 1]) {
                    damage += (a[i + 1] - a[i]);
                } else {
                    damage += mid;
                }
            }
            // for the last point
            damage += mid;
            if (damage < h) {
                low = mid + 1;
            } else { // wanted 
                high = mid - 1;
            }
        }

        // at the last step
        // low = high = mid
        // if damage < h:
        // mid = na, low modify na + 1, high = mid = na unmodified // low is the answer
        // if damage >= h:
        // mid = ans, low = ans, high = ans - 1(breaking the loop) // low is the answer
        
        // so return low at the end
        cout << low << endl;
    }
    return 0;
}