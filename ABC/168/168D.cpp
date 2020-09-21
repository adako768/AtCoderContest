#include <iostream>
#include <list>
#include <utility>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    int N,M;
    cin >> N >> M;
    vector <list <int> > rooms(N);

    for (int i=0; i<M; i++){
        int A,B;
        cin >> A >> B;
        rooms[A-1].push_back(B);
        rooms[B-1].push_back(A);
    }

    return 0;
}