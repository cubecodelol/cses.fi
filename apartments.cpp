//Designed by cubemanlol_

#include<iostream>

using namespace std;

int main() {
    long long n, m, k, ans = 0;
    cin >> n >> m >> k;
    long long a[n][2], b[m];
    for (int i = 0; i < n; i++) {
        long long otn;
        cin >> otn;
        a[i][0] = otn - k;
        a[i][1] = otn + k;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        for (int j = 0; j < n; j++) {
            if (b[i] >= a[j][0] and b[i] <= a[j][1]) {
                ans++;
                break;
            }
        }
    }
    cout << ans;
}