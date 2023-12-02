#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string word; cin >> word;
    if (word[0] >= 97) { // small letter
        word[0] = word[0] - ('a' - 'A');
    }
    cout << word;
    return 0;
}