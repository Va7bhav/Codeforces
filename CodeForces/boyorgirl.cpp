#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    unordered_set<int> s;
    string str; cin >> str;

    for (char c: str) {
        s.insert(c);
    }

    if (s.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}