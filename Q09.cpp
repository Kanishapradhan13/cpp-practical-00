#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;

int main() {
    vector<int> v20240101;
    int val;

    cout << "Enter 6 values: ";
    for (int i = 0; i < 6; i++) {
        cin >> val;
        v20240101.push_back(val);
    }

    cout << "\nOriginal : ";
    for (int x : v20240101) cout << x << "  ";

    sort(v20240101.begin(), v20240101.end());
    cout << "\nSorted   : ";
    for (int x : v20240101) cout << x << "  ";

    int mn = *min_element(v20240101.begin(), v20240101.end());
    int mx = *max_element(v20240101.begin(), v20240101.end());
    int sm = accumulate(v20240101.begin(), v20240101.end(), 0);
    double avg = (double)sm / v20240101.size();

    cout << "\nMin      : " << mn;
    cout << "\nMax      : " << mx;
    cout << "\nSum      : " << sm;
    cout << "\nAverage  : " << fixed << setprecision(2) << avg;

    v20240101.erase(remove_if(v20240101.begin(), v20240101.end(), [avg](int x){ return x < avg; }), v20240101.end());

    cout << "\n\nAfter removing below average:" << endl;
    for (int x : v20240101) cout << x << "  ";
    cout << endl;

    return 0;
}