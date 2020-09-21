#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,a;
    long long m=0,s=0;
    cin >> n ;
    for (int i=0; i<n; i++) {
        cin >> a;
        if (m < a) {
            m = a;
        } else if (i!=0) {
            s += m - a;
        }
    }


    cout << s << endl;
    return 0;
}