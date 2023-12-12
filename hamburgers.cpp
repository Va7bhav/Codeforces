#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s; 
    cin >> s;
    ll b1, b2, b3;
    ll p1, p2, p3;
    cin >> b1 >> b2 >> b3;
    cin >> p1 >> p2 >> p3;
    ll r;
    cin >> r;
    
    ll B = 0, S = 0, C = 0;
    for (char c: s) {
        if (c == 'B') {
            B += 1;
        } else if (c == 'S') {
            S += 1;
        } else {
            C += 1;
        }
    }
    
    ll low = 0, high = r + 200;
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        // mid denotes the number of hamburger we can make
        ll z = 0;
        ll r1 = max(B * mid - b1, z);
        ll r2 = max(S * mid - b2, z);
        ll r3 = max(C * mid - b3, z);

        ll price = (r1 * p1 + r2 * p2 + r3 * p3);

        if (price <= r) {
            low = mid + 1;
        } else  {
            high = mid - 1;
        }   
    }
    // at last stage
    // when low == high
    // for price <= r:
        // mid = ans;
        // high = ans // high is the answer
        // but low will get shifted to ans + 1
        // and the loop breaks
    // for price > r: (last condition not getting satisfied as we wanted, we wanted (price <= r))
        // mid = na
        // high is getting modified
        // so high will be our answer // high is the answer
        // high = na - 1;
    // so return high at the end
    cout << high;
    return 0;
}