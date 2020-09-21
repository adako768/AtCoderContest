#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,k, a;
    cin >> n >> k;
    vector<int> p, m;
    for (int i=0; i<n; i++) {
        cin >> a;
        if (a > 0) p.push_back(a);
        else m.push_back(a);
    }
    sort(p.beguin(), p.end(),greater<int>());
    sort(m.beguin(), m.end());
    for (int i=0; i<k; i++) {
        ;
    }
    return 0;
}