#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    cout << "Roing dice..." << endl;
    int n;
    n = 2;
    int ans = 0;

    rep(i, 1, n+1) {
        int x; x = rand()%6 + 1;
        cout << "Die " << i << ": " << x << endl;
        ans += x;
    }

    cout << "Total value: " << ans;
    return 0;
}