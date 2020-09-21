#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353;


int reachX (int idx, vector<pair(int,int)> &v){
    int y=0;
    int nxt = v[idx].first + v[idx].second;
    for (int i=0; i<v.size(); i++) {
        if ( v[idx].first < v[i].first && v[i].first< nxt ) {
            y=max(y,reachX(i,v));
        }
    }
    return y;
} 
int main() {
    int N;
    long long cnt = 0;
    vector<pair(int,int)>  robots(N);
    cin >> N ;
    int x,d;
    for (int i=0; i<N; i++) {
        cin >> x >> d;
        robots[i] = mk_pair(x,d);
    }
    vector<bool> on_flg(N), t_flg(N);
    vector<int> len(N,0);
    for (int i=0; i<N; i++) {
    }

    
    return 0;
}