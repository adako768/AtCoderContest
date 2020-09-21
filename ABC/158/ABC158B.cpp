#include<iostream>
using namespace std;
int main()
{
    // 整数の入力
    long long N,a,b;
    // スペース区切りの整数の入力
    cin >> N >> a >> b ;
    long long q=N/(a+b);
    long long r=N%(a+b);
    if ( r > a ){
        // 出力
        cout << (q+1)*a << endl;
    } else {
        // 出力
        cout << q*a+r << endl;
    }
    return 0;
}