//Designed by cubemanlol_
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a, a+n);
    int t=1;
    for(int i=0; i<n-1; i++) {
        if( a[i+1] != a[i] ) {
            t++;
        }
    }
    cout<<t;
}