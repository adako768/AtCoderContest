#include <bits/stdc++.h>
using namespace std;


int main() {
    double d,t,s;
    cin >> d >> t >> s;

    if (t < d/s) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;

    return 0;
}