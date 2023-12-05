#include<iostream>
#include<bits/stdc++.h>
typedef long long ll; 
using namespace std;

int main() {
    ll n, m, k; cin >> n >> m >> k;
    //concept: finding 2 maximums given a stream of numbers
    ll m1 = 0, m2 = 0;
    for (int i = 0; i < n; i++) {
        ll a; cin >> a;
        if (a > m1) m2 = m1, m1 = a;
        else if (a > m2) m2 = a;
    }
    // concept end
                
    ll points = (k*m1 + m2) * (m / (k + 1));
    points += m1 * (m % (k + 1));
    cout << points << endl;
    return 0;
}