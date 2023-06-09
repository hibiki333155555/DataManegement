#include <iostream>
#include <time.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    cout << "Roing dice..." << endl;
    int n;
    n = 2;
    int ans = 0;
    srand((unsigned int)time(NULL));

    rep(i, 1, n+1) {
        int x; x = rand()%6 + 1;
        cout << "Die " << i << ": " << x << endl;
        ans += x;
    }

    cout << "Total value: " << ans;
    if(ans > 7) cout << "You Won!" << endl;
    else cout << "You Lost" << endl;
    return 0;
}