#include <bits/stdc++.h>
using namespace std;


int main() {
    long long n;
    int x,m;
    cin >> n >> x >> m;
    vector <long long> sum;
    map <int, int> chk ;
    int s_idx = -1;
    int n_loop = 0;
    for (int i=0; i < m;i++) {
        chk[x] = i;
        sum.push_back(x);
        x = (x*x)%m;
        if (chk.find(x) != chk.end()) {
            s_idx = chk[x];
            n_loop = i-chk[x];
            break;
        }
        // cout << x << endl;
    }
    if (s_idx < 0) {
        cout << sum.back() << endl;
    } else {
        int tail  = 0;
        if (s_idx > 0)
            tail = sum[s_idx-1];
        int r = ((n-1)-s_idx)%n_loop;
        int q = (int) ceil((double)((n-1)-s_idx) / n_loop);
        cout << tail + q*(sum.back() - tail) + sum[s_idx + r] - tail << endl;
    }
    return 0;
}