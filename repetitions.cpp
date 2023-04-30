//Designed by cubemanlol_
#include<iostream>
#define cubemanlol ios_base::sync_with_stdio(false);cin.tie();cout.tie()
#define str string
using namespace std;
int main() {
    cubemanlol;
    str s;
    cin>>s;
    int n=0;
    for(int i=0; i<s.size(); i++) {
        int a=1;
        while( s[i] == s[i+1] ) {
            i++;
            a++;
        }
        if( a > n ) {
            n=a;
        }
    }
    cout<<n;
}