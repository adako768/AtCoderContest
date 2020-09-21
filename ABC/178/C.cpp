#include <bits/stdc++.h>
using namespace std;


int main() {
    long long n;
    const long long  q = 1000000007;
    cin >> n;
    if (n < 2) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 2) {
        cout << 2 << endl;
        return 0;
    }
    long long ans = 0;
    long long tmp = 1;
    for (long long i=1; i<n-2; i++) {
        if (8*tmp < 0) cout << tmp << endl;
        tmp = (8*tmp)%q;
        ans += (2*tmp)%q;
        ans %=q;
        if (ans < 0) cout << ans << endl;
    }
    cout << ans << endl;
    
    ans += (8*tmp)%q;
    ans %=q;
    cout << ans << endl;
    tmp = (n*(n-1))%q;
    cout << tmp << endl;
    ans = (tmp*ans)%q;
    cout << ans << endl;
    ans = (2*n + ans)%q;
    
    cout << ans << endl;
    return 0;
}