#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n, k; cin >> n >> k;
    int cap = ceil(1.0*n / 2);
    vector<int> hash(k + 1);

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        hash[a] += 1;
    }
    int even = 0, odd = 0;
    for (int i = 0; i <= k; i++) {
        if (hash[i] % 2 == 0) {
            even += (hash[i]);
        } else {
            even += (hash[i] - 1), odd += 1;
        }
    }   
    int res = 0;
    res += 2 * min(cap, even / 2);
    cap -= min(cap, even / 2);
    res += cap;
    cout << res << endl;
    return 0;
}