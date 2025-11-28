#include <iostream>
using namespace std;
int main() {
    int R, X; cin >> R >> X;
    if (X == 1) {
        if (R <= 2999 && R >= 1600) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    if (X == 2) {
        if (R <= 2399 && R >= 1200) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}