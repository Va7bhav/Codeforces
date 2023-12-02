#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;
    while (n > 0) {
        string stmt;

        cin >> stmt;
        if (stmt == "X++" || stmt == "++X") {
            x++;
        } else {
            x--;
        }
        n--;
    }
    cout << x;
}