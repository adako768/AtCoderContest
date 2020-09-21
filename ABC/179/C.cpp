#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int c=1; c < n;c++) {
        for (int a=1; a*a <= n-c; a++) {
            if ((n-c)%a == 0) {
                cnt++;
                if (a*a != n-c) cnt++; 
            }
        }
    } 
    cout << cnt << endl;
    return 0;
}