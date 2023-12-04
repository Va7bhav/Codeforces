#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int cubes = 0;
    int height = 0;
    while (cubes <= n) {
        height += 1;
        cubes += (height * (height + 1)) / 2;
    }
    cout << height - 1;
    return 0;
}