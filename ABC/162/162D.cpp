#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    string S;
    cin >> N;
    cin >> S;
    int cnt = 0;
    for (int i=0; i < N-2; i++) {
        char S_i = S[i];
        for (int j=i+1; j < N-1; j++) {
            char S_j = S[j];
            if ( S_i == S_j ) continue;
            for (int k=j+1; k < N; k++) {
                char S_k = S[k];
                if (S_k == S_i || S_k == S_j) continue;
                if ( j -i == k - j ) continue;
                cnt ++ ;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}