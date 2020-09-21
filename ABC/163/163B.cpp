#include<iostream>
using namespace std;
int main()
{
    int N, M, A_i;
    cin >> N >> M;
    int days = 0;
    while(cin>>A_i){
        days += A_i;
    }
    if (N - days < 0) {
        cout << "-1" << endl;
    } else {
        cout << N-days << endl;
    }
    return 0;
}