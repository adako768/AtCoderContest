#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
    cin >> n >> m >> k;

    vector <int> a(n+1,0);
    vector <int> b(m+1,0);
    int i=0, j=0;
    for (i=1; i<n+1; i++) cin >> a[i];
    for (j=1; j<m+1; j++) cin >> b[j];
    
    queue <pair <long long, pair<int,int>>> que;
    pair<int,int> a_1(1, 0);
    pair<int,int> b_1(0,1);
    que.push(make_pair(a[1],a_1));
    que.push(make_pair(b[1],b_1));
    int cnt = 1;
 
    while (!que.empty()) {
        pair <long long, pair<int,int>> t = que.front();
        que.pop();
        long long time = t.first;
        i = t.second.first;
        j = t.second.second;
        if ( i+1 <= n && k >= time+a[i]) {
            que.push(pair <long long, pair<int,int>>(time+a[i],pair<int,int>(i+1,j)));
            cnt = max(i+j, cnt);
        }
        if ( j+1 <= m && k >= time+b[j]) {
            que.push(pair <long long, pair<int,int>>(time+b[j],pair<int,int>(i,j+1)));
            cnt = max(i+j, cnt);
        }
    }
    cout << cnt << endl;



    return 0;
}