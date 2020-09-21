#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double X;
    cin >> X;
    double X_pow= pow(X,1./5.);
    if (floor(X_pow) == X_pow) {
        cout << (int) X_pow <<" "<< 0 <<endl;
        return 0;
    }
    int A = floor(X_pow);
    while (true){
        pow(A,5) - pow(B,5) == X;
    }
    cout << " " << endl;
    return 0;
} 
