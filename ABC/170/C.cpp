#include <bits/stdc++.h>
using namespace std;


int main() {
    int x,n;
    int ans;
    vector<bool> v(199,false);

    cin >> x >> n;
    for (int i=0;i<n;i++) {
        int p;
        cin >> p;
        int tmp = p-x;
        if (tmp<0) tmp = (-2*tmp)-1;
        else tmp *= 2;
        v[tmp] = true;
    }
    for (int i=0 ; i<v.size(); i++){
        if (!v[i]) {
            // cout << i << endl;
            if (i%2 == 0){
                cout << x+i/2 << endl;
            } else {
                cout << x-(i+1)/2 << endl;
            }
            return 0;
        }
    }

    return 0;
}