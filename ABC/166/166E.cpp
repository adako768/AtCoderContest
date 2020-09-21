#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N] ={0};
    
    int cnt=0;
    for (int i = 0; i < N; i++ ){
        int a;
        cin >> a;
        A[i]=a;
        for (int j=0; j<i; j++){
            if (A[j]+a==i-j) cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
} 
