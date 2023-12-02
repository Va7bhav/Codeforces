#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int x;
    cin >> x;
    string input = to_string(x);
    for (int i = 0; i < input.length(); i++) {
        if (i == 0 && input[i] == '9') {
            continue;
        }
        if (input[i] - '0' > 4) {
            input[i] = ((9 - (input[i] - '0')) + '0');
        } 
    }
    cout << input;

    
    return 0;
}