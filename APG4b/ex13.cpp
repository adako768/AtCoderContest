#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector <int> a(N,0);
    int avr = 0;
    for (int i=0; i<a.size(); i++) {
        cin >> a.at(i);
        avr += a.at(i);
    }
    avr /= N;
    for (int i=0; i<a.size(); i++) {
        cout << abs(a.at(i) - avr) << endl;
    }
}

