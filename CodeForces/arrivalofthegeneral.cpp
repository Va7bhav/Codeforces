#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int mini = 101, maxi = 1; // indexes
    int min_val = 101, max_val = 0; // values
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num <= min_val) {
            min_val = num;
            mini = i;
        } 
        if (num > max_val) {
            max_val = num;
            maxi = i;
        }
    }
    if (maxi < mini) {
        cout << (n - mini) + (maxi - 0 - 1);
    } else {
        cout << (n - mini) + (maxi - 0 - 1) - 1;
    }
    
    return 0;
}