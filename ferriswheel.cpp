//Designed by cubemanlol_

#include <iostream>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    ll kids, maxWeight, ans = 0;
    cin >> kids >> maxWeight;

    ll kidWeight [kids];
    for ( ll i = 0; i < kids; i++ ) {
        cin >> kidWeight [i];
    }
    sort ( kidWeight, kidWeight + kids );

    ll n = kids - 1;
    while ( kidWeight [0] + kidWeight [n] > maxWeight ) {
        n--;
    }

    for (int i = 0; i < n; i+=0) {

    }
}