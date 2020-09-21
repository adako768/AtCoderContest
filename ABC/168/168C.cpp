#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double A,B,H,M;
    cin >> A >> B >> H >> M;
    cout << fixed << setprecision(11);
    double theta = M_PI * (11. * M - 60. * H) / 360.;
    // cout << (11. * M - 60. * H) / 360. << endl;
    double len = sqrt(A*A + B*B - 2. * A * B * cos(theta));
    cout << len << endl;
    
    return 0;
}