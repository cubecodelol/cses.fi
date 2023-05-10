//Designed by cubemanlol_

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arraySize, targetSum;
    cin >> arraySize >> targetSum;

    vector < pair< int, int> > array( arraySize );
    for ( int i = 0; i < arraySize; i++ ) {
        cin >> array[i].first;
        array[i].second = i + 1;
    }
    sort( array.begin(), array.end() );

    int firstNumber = 0, secondNumber = arraySize - 1;
    while ( firstNumber < secondNumber ) {
        if ( array[firstNumber].first + array[secondNumber].first > targetSum ) {
            secondNumber--;
            continue;
        }
        if ( array[firstNumber].first + array[secondNumber].first < targetSum ) {
            firstNumber++;
            continue;
        }
        if ( array[firstNumber].first + array[secondNumber].first == targetSum ) {
            cout << min( array[firstNumber].second, array[secondNumber].second ) << ' ' << max( array[firstNumber].second, array[secondNumber].second );
            return 0;
        }
    }

    cout << "IMPOSSIBLE";
}