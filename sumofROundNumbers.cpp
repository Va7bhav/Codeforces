#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k = 0;
        vector<int> res;
        int i = 1;
        while (n) {
            int digit = n % 10;
            if (digit != 0) {
                k += 1;
                res.push_back(digit * i);
            }
            i *= 10;
            n /= 10;
        }
        cout << k << endl;
        for (int i: res) {
            cout << i << " "; 
        }
        cout << endl;

    }
    return 0;
}