#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, s;
    cin >> n;
    vector <int> a(n,0);
    s=0;

    for (int i=0; i<n; i++) {
        cin >> a[i];
        s = s^a[i];
    }

    for (int i=0; i<n; i++) {
        int ans = s^a[i];
        if (i) cout << " " ;
        cout << ans ;
    }
    cout << endl;
    return 0;
}