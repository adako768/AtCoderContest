#include <bits/stdc++.h>
using namespace std;


int main() {
    int  n,k;
    cin >> n >> k;

    vector <int> f(n,0);
    for (int i=0; i<n; i++){
        cin >> f[i];

    }

    sort(f.begin(), f.end());
    int ans = 0;
    for (int i=0; i<k; i++){
        ans += f[i];
    }

    cout << ans << endl;
    return 0;
}