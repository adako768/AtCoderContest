#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    long long K;
    cin >> N >> K;
    vector<int> A(N);

    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    int idx = 0;
    vector<int> cities; 
    vector<int> visits(N,-1); 
    while (true) {
        cities.push_back(idx);
        visits[idx] = cities.size()-1;
        idx = A[idx] -1;
        if (visits[idx] != -1) {
            int t = visits[idx] + (K-visits[idx])%(cities.size() - visits[idx]);
            
            cout << cities[t]+1 << endl;
            break;
        }
        if (cities.size() == K + 1) {
            cout << cities.back()+1<< endl;
            break;
        }
    }

    
    return 0;
}