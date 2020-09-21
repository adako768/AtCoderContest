#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector <int> a(n,0);
    vector <int> b(n,0);
    for (int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    if (n%2 == 0) {
        cout << (b[n/2-1]+b[n/2]) - (a[n/2-1]+a[n/2])  +1<< endl;
    } else {
        cout << b[(n-1)/2] - a[(n-1)/2] + 1 << endl;
    }

    
    return 0;
}