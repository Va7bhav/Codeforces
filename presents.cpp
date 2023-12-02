#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n + 1);
    for (int pi = 1; pi <= n; pi++) {
        int i; cin >> i;
        arr[i] = pi;
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}