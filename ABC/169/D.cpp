#include <bits/stdc++.h>
using namespace std;

long long count (long long &n, long long z, bool &isPrime) {
    long long cnt = 0;
    // cout << "z is "<< z << endl;
    while (n%z == 0) {
        n /= z;
    // cout << "n is "<< n << endl;
        cnt ++;
        isPrime = false;
    }
    long long ans = 0;    
    while (ans<cnt && cnt != 0){
    // cout << "cnt is " << cnt << endl;
        ans ++;
        cnt -= ans;
    }

    return ans;
}
int main() {
    long long n;
    cin >> n;
    long long ans = 0;

    if (n==1) {
        cout << ans << endl;
        return 0;
    }

    bool isPrime = true;
    long long z = 2;
    ans += count(n, z, isPrime);
    
    for (z=3; z*z<=n; z+=2){
        if (n%z != 0) continue;
        // cout << z * z << " " << n << endl; 
        ans += count(n,z, isPrime);
    }

    if (n != 1) ans += 1;
    if (isPrime) ans = 1; 
    
    cout << ans << endl;
    
    return 0;
}