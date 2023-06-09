#include <iostream>
#include <string>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    
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