#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix(5, (vector<int> (5)));
    int r = 0, c = 0;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                r = i, c = j;
            }
        }
    }
    cout << abs(r - 2) + abs(c - 2);



    return 0;
}