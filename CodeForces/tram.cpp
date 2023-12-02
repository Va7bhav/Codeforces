#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int p = 0;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        int a, b; cin >> a >> b;
        p -= a;
        p += b;
        res = max(res, p);
    }
    cout << res;
    return 0;
}