#include <bits/stdc++.h>
using namespace std;


int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    long long ans = (long long)a*c;
    long long tmp = (long long)a*d;
    ans = max(ans,tmp);
    tmp = (long long)b*d;
    ans = max(ans,tmp);
    tmp = (long long)b*c;
    ans = max(ans,tmp);
    cout << ans << endl;
    return 0;
}