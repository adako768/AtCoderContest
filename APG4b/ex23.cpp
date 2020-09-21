#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    map <int,int> mp; 

    int a;
    while (cin >> a) mp[a] ++;
    
    int value=0;
    int key=0;
    for (auto p : mp) {
        if (value < p.second){
            key = p.first;
            value = p.second;
        }
    }
    cout << key << " " << value << endl;

}
