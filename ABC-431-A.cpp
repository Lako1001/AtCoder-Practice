#include <iostream>
using namespace std;

int main() {
    int H, B;
    cin >> H >> B;

    int ans = max(0, H - B);
    cout << ans << endl;
}
