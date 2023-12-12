#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int sum(int n) {
    return (n * (n + 1)) / 2; // tbs
}
int main() {
    int n, k; cin >> n >> k;
    int low = 0, high = k + 1;
    
    if (sum(k - 1) + 1 < n) {
        cout << -1;
        return 0;
    }
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // number of outputs according to mid
        int outputs = sum(k - 1) - sum(mid) + 1;

        if (outputs >= n) { // wanted condtion (outputs == n) is included in this
            low = mid + 1;
        } else { 
            high = mid - 1;
        }
    }
    // at the end of the loop: low == high == mid
    // when (outputs >= n) : mid = ans = high // high is the answer // low gets modified
    // when (outputs < n) : mid = na, low = na, high = na - 1, high is getting modified to become the answer 
    // high is the index at which from sum is satisfied
    // but we have to return the number of splitters
    // thus return k - 1 - high
    cout << k - 1 - high;
    return 0;
}

// i want minimum splitters, if (outputs == n) i want to push my answer further that means I want more minimum value, so i increase low to mid + 1 to decrease the number of splitters