#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    vector<bool> A(N,true);
    for (int i = 0; i < K; i++ ){
        int d_i;
        cin >> d_i;
        for (int n=0; n<d_i; n++) {
            int a;
            cin >> a;
            A[a-1]=false;
        }
    }
    cout << count(A.begin(), A.end(), true) << endl;
    return 0;
} 