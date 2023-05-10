//Designed by cubemanlol_

#include <iostream>
#include <set>

using namespace std;

int main() {
    int numberOfTickets, numberOfCustomers;
    cin >> numberOfTickets >> numberOfCustomers;
    multiset<int>price;
    int customerPrice[numberOfCustomers];

    for ( int i = 0; i < numberOfTickets; i++ ) {
        int otn;
        cin >> otn;
        price.insert(otn);
    }

    for ( int i = 0; i < numberOfCustomers; i++ ) {
        cin >> customerPrice[i];
        int n = price.count( customerPrice[i] );
        while ( n == 0 ) {
            customerPrice[i]-=1;
            n = price.count( customerPrice[i] );
            if ( customerPrice[i] == -1 ) {
                break;
            }
        }
        for (auto& p : price) {
            if (p == customerPrice[i]) {
                price.erase(p);
                break;
            }
        }
    }

    for ( int i = 0; i < numberOfCustomers; i++ ) {
        cout << customerPrice[i] << endl;
    }
}