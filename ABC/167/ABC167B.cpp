#include <iostream>
using namespace std;
int main()
{
    long A,B,C,K;
    cin >> A >> B >> C >> K;
    long ans = 0;
    if ( A >= K ) {
        ans = K;
    } else if (A + B >= K) {
        ans = A;
    } else {
        ans = A - (K - A - B);
    }
    cout << ans << endl;
    return 0;
}