#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string tcard; cin >> tcard;

    for (int i = 0; i < 5; i++) {
        string card; cin >> card;
        if (card[0] == tcard[0] || card[1] == tcard[1]) {
            cout << "YES";
            return 0;
        } 
    }
    cout << "NO";
    return 0;
}