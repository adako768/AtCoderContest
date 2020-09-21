#include <bits/stdc++.h>
using namespace std;


int main() {
    string n;
    cin >> n ;
    int s=0;
    for (int i=0; i<n.size(); i++) {
        s += (int) (n[i] - '0');
    }
    if (s%9 == 0) {
        cout << "Yes" << endl;
        return 0;
    } 
    cout << "No" << endl;
    return 0;
}