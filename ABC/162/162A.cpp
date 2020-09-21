#include<iostream>
using namespace std;
int main()
{
    int N, A_i;
    cin >> N;
    int A[N] = {0};
    while(cin>>A_i){
        A[A_i-1]++;
    }
    for (int i=0; i < N ; i++){
        cout << A[i] << endl;
    }
    return 0;
}