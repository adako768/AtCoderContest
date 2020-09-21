#include<iostream>
using namespace std;
int main()
{
    int A, B, K;
    cin >> K;
    cin >> A >> B;
    
    if (A/K > B/K || ( A/K == B/K  && A%K != 0 && B%K !=0 )) {
        cout << "NG" << endl;
    } else {
        cout << "OK" << endl;
    }
    return 0;
} 