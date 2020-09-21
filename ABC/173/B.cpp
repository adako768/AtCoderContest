#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    string s_i;
    cin >> n;
    map <string, int> s;
    s["AC"]=0;
    s["WA"]=0;
    s["TLE"]=0;
    s["RE"]=0;
    for (int i=0; i<n; i++) {
        cin >> s_i;
        s[s_i] ++;
    }
    cout << "AC x " <<s["AC"]<< endl;
    cout << "WA x " <<s["WA"]<< endl;
    cout << "TLE x " <<s["TLE"]<< endl;
    cout << "RE x " <<s["RE"]<< endl;
    return 0;
}