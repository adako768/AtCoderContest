#include<iostream>
using namespace std;
int main()
{
    // 整数の入力
    int a,b;
    // スペース区切りの整数の入力
    cin >> a >> b ;
    for (int i=10*b; i<10*b+10;i++){
    //cout << i/10 << endl;
        if (int(i*0.08) == a){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}