#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n; cin >> n;

    int check = 0;
    while (n) {
        if (n % 10 == 7 || n % 10 == 4) {
            check += 1;
        } 
        n /= 10;
    }
    if (check == 4 || check == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}