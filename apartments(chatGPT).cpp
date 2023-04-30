#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicant_sizes(n);
    for (int i = 0; i < n; i++) {
        cin >> applicant_sizes[i];
    }

    vector<int> apartment_sizes(m);
    for (int i = 0; i < m; i++) {
        cin >> apartment_sizes[i];
    }

    sort(applicant_sizes.begin(), applicant_sizes.end());
    sort(apartment_sizes.begin(), apartment_sizes.end());

    int i = 0, j = 0, assigned_applicants = 0;
    while (i < n && j < m) {
        if (abs(applicant_sizes[i] - apartment_sizes[j]) <= k) {
            i++;
            j++;
            assigned_applicants++;
        } else if (applicant_sizes[i] - apartment_sizes[j] < -k) {
            i++;
        } else {
            j++;
        }
    }

    cout << assigned_applicants << endl;

    return 0;
}