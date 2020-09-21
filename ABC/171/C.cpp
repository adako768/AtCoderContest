#include <bits/stdc++.h>
using namespace std;


int main() {
    long long  n;
    cin >> n;
    long long mod = 1;
    long long x = 0;

    for (int i=0; i<=11; i++) {
        if (n <= (x+1)*26) {
            n -= x;
            break;
        }
        mod *=26;
        x = (x+1)*26;
    } 
    n--;
    char tmp;
    while (mod != 1) {
        tmp = ((int) 'a' + n / mod);
        cout << tmp ;
        n %= mod;
        mod /= 26;
    }
    n++;
    tmp = ((int) 'a' + n / mod-1);
    cout << tmp << endl;

    return 0;
}