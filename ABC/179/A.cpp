#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;
    int lst = s.length()-1;
    if (s[lst] != 's') {
        cout << s+"s" << endl;
    } else {
        cout << s+"es" << endl;
    }
    return 0;
}