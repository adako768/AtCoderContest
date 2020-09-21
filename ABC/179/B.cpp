#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, d1, d2;
    cin >> n;
    bool chk=false;
    int cnt=0;
    for (int i=0;i<n;i++) {
        cin >> d1 >> d2;
        
        if (d1 == d2) cnt++;
        else cnt=0;

        if (cnt==3) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}