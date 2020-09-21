#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a=1;
    for (int i=0;i<s.size();i++) {
        char op = s[i];
        if (op == '+') a ++;
        else if (op == '-') a --;
    }
    cout << a << endl; 

}
