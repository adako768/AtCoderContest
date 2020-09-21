#include <bits/stdc++.h>
using namespace std;


int main() {
    const long long B = 1000000000000000000;
    int N;
    cin >> N;
    vector<long long> a(N,0);
    long long ans=1;
    for (int i=0; i<N; i++) {
        cin >>a[i];
        if (a[i] == 0) {
            cout << 0 << endl;
            return 0;
        }
        
    }
    std::sort(a.begin(),a.end(),std::greater<int>());
    for (int i=0; i<N; i++) {
        // cout << "a is " << log10((double)a[i]) << endl;
        // cout << "ans is " << log10((double)ans) << endl;
        if (log10((double)ans) + log10((double)a[i]) > 19.) {
            cout << -1 << endl;
            return 0;
        }
        ans *= a[i];
        if (ans > B){
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
    
    return 0;
}