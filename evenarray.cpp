#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int countOnes = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            if (i % 2 != a % 2) {
                cnt += 1;
            }
            if (a % 2 == 1) {
                countOnes += 1;
            }
        }
        if ((n / 2) != countOnes) cout << -1 << endl;

        else cout << cnt / 2 << endl;
    }
    return 0;
}
