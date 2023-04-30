//Designed by cubemanlol_
#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll n,s=0,swm=0;
    cin>>n;
    for(int i=1; i<=n; i++) {
        s+=i;
    }
    for(int i=1; i<n; i++) {
        ll a;
        cin>>a;
        swm+=a;
    }
    cout<<s-swm;
}