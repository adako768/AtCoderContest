#include <iostream>
#include <string>
using namespace std;
int main()
{
    int K;
    string S;
    cin >> K >> S;

    if (K < S.size()) cout << S.substr(0,K) << "..." << endl;
    else cout << S << endl;
    return 0;
}