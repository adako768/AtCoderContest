#include <bits/stdc++.h>
using namespace std;


int main() {
    int h,w,m;
    cin >> h >> w >> m;
    vector <vector<int>> cnt(h,vector<int>(w,0));
    vector <int> cnt_h(h,0);
    vector <int> cnt_w(w,0);
    int h_i, w_i;
    for (int i=0; i<m; i++) {
        cin >> h_i >> w_i;
        cnt_h[h_i-1]++;
        cnt_w[w_i-1]++;
        cnt[h_i-1][w_i-1] = -1;
        // for (int j=0; j<w; j++) {
        //     cnt[h_i-1][j] ++;
        // }
        // for (int j=0; j<h; j++) {
        //     if (h_i-1 != j) cnt[j][w_i-1] ++;
        // }
    }
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cnt[i][j] = cnt[i][j] + cnt_h[i] + cnt_w[j];
        }
    }
    int maxi = 0;
    for (int i = 0; i < h; ++i) 
        maxi = max(maxi, (int)*max_element(cnt[i].begin(), cnt[i].end()));
    cout << maxi << endl;
    
    

    // vector <vector<int>> tag(h,vector<int>(w,0));
    // int h_i, w_i;
    // for (int i=0; i<m; i++) {
    //     cin >> h_i >> w_i;
    //     cnt_h[h_i]++;
    //     cnt_w[w_i]++;
    //     tag[h_i][w_i] = 1;
    // }
    // int max_h = *std::max_element(cnt_h.begin(), cnt_h.end());
    // int max_w = *std::max_element(cnt_w.begin(), cnt_w.end());

    // cout << max_h + max_w << endl;
    return 0;
}