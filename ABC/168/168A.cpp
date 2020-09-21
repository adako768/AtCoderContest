#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    cin >> S;

    if (S.back() == '3' ) 
        cout << "bon" << endl;
    else if (S.back() == '0' || S.back() == '1' || S.back() == '6' || S.back() == '8') 
        cout << "pon" << endl;
    else 
        cout << "hon" << endl;
    return 0;
}