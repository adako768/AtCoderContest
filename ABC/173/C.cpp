#include <bits/stdc++.h>
using namespace std;


int main() {
    int h,w,k;
    cin >> h >> w >> k;
    
    vector<int> n(h,0);
    vector<int> m(w,0);
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            char c;
            cin >> c;
            if (c == '#') {
                n[i] ++;
                m[j] ++;
            }
        }
    }
    return 0;
}