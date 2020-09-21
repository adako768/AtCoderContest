#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    int ans =0;
    cin >>  n;
    vector<int> a(n,0);
    vector<int> a(n,0);
    vector<bool> v(n,true);
    int a_i;

    for (int i=0;i<n;i++) {
        cin >> a_i;
        for (int j=0;j<a.size();j++){
            if (a[j]%a_i==0){
                v[j] = false;
            }
        }
    }
    // for (int i=0;i<n;i++) {
    //     bool chk = true;
    //     for(int j=0; j<n;j++){
    //         if (i==j) continue;
    //         if (a[i]%a[j] == 0) {
    //             chk=false;
    //             break;
    //         }
    //     }
    //     if (chk) ans ++;
    // }
    cout << ans << endl;

    return 0;
}