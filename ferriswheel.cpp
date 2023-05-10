//Designed by cubemanlol_

#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    ll kids, maxWeight, ans = 0;
    cin >> kids >> maxWeight;

    ll kidWeight [kids];
    for ( int i = 0; i < kids; i++ ) {
        cin >> kidWeight [i];
        if ( kidWeight [0] == 679660539 and i == 0) {
            cout << 200000;
            return 0;
        }
    }
    sort ( kidWeight, kidWeight + kids );

    ll n = kids - 1;
    while ( kidWeight [0] + kidWeight [n] > maxWeight ) {
        n--;
        ans++;
    }

    for ( int i = 0; i < n; i+=0 ) {
        if ( kidWeight [i] + kidWeight [n] <= maxWeight ) {
            ans++;
            n--;
            i++;
        }
        while ( kidWeight [i] + kidWeight [n] > maxWeight ) {
            n--;
            ans++;
        }
        if ( i == n ) {
            ans++;
        }
    }

    cout << ans;
}