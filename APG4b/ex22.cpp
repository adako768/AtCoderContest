#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, a, b;
    cin >> N;

    vector<pair <int,int>> v(N);

    for (int i=0;i<N;i++) {
        cin >> b >> a;
        v.at(i) = make_pair(a,b);
    }

    sort(v.begin(),v.end());
    
    for (auto x: v) 
        cout << x.second <<" "<< x.first<< endl;

}
