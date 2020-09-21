#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
    int N,M,X;
    cin >> N >> M >> X;
    vector< vector<int> > A(N, vector<int>(M));
    vector<int> C(N);
    for (int i=0; i<N; i++) {
        cin >> C[i];
        for (int j=0; j<M; j++)
            cin >> A[i][j];
    }
    int ans = 100000 * N + 1;
    for (int bit = 0; bit < (1 << N); ++bit) {
        vector <int> sumA(M,0);
        vector <int> judge(M,0);
        int cost=0;
        for (int i=0; i<N; i++) {
            if (bit & (1<<i) ) {
                cost += C[i];
                for (int j=0; j<M; j++){ 
                    sumA[j] += A[i][j];
                    judge[j] = int (sumA[j] >= X);
                }
            }
        }
        if (accumulate(judge.begin(), judge.end(), 0) == M) 
            ans = min(cost,ans);
    }
    
    if (ans == 100000 * N + 1) ans = -1;
    cout << ans << endl;
    
    return 0;
}