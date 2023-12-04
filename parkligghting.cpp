#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int ans = ceil(n * m / 2.0);
        cout << ans << endl;
    }
    return 0;
}

