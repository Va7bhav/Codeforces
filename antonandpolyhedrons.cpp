#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++) {
        string ph;
        cin >> ph;
        if (ph[0] == 'T') res += 4;
        if (ph[0] == 'C') res += 6;
        if (ph[0] == 'O') res += 8;
        if (ph[0] == 'D') res += 12;
        if (ph[0] == 'I') res += 20;
    }
    cout << res;
    return 0;
}