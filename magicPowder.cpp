#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {   
        int inp; cin >> inp;
        a[i] = inp;
    }
    vector<int> b(n + 1);
    for (int i = 1; i <= n; i++) {
        int inp; cin >> inp;
        b[i] = inp;
    }

    int low = 0, high = 2001;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int r = 0;
        for (int i = 1; i <= n; i++) {
            r += max((a[i] * mid) - b[i], 0);
        }
        if (r <= k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    // at the last step
    // low == high,
    // if (r <= k) { // wanted condition gets satisfied
    //     mid is the answer
    //     low will get modified to break the loop
    //     high will get the value of mid
    //     this means high will be our answer
    // }
    // if (r > k) { // at the last step still the needed condition doesn't get satisfied
    //     mid is not the answer i.e. mid = na
    //     high will be na - 1
    //     low doesn't get satisfied at the last step
    //     we know that at the last step we will get our answer, as we know it's now in mid, it's not in low
    //     high gets modified so the answer is in high
    // }
    // return high at the end
    cout << high;
    return 0;
}