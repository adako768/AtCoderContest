#include <iostream>
#include <numeric>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    const int P = 998244353;

    int N,M,K;
    cin >> N >> M>> K;
    vector <vector<long long>> comb(N,vector<long long> (N,0));
    for (int i = 0; i < comb.size(); i++) {
        
        comb[i][i] = 1;
        comb[i][0] = 1;
        if (i==0) continue;
        for (int j = 1; j < i; j++) comb[i][j] = (comb[i - 1][j - 1] + comb[i - 1][j])%P;
    }
    long long sum = 0;
    long long powM = 1;
    for (int k=0; k<K+1; k++) {
        cout << N-1 <<"C" << k << " = "<< comb[N-1][k] << endl;
        cout << "(M-1)^"<< N-1-k << endl;
        sum = (sum + comb[N-1][k] * M * powM)%P;
        powM = (powM*(M-1))%P;
    }
    cout << sum << endl;
    return 0;
}