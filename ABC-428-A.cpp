#include <iostream>
using namespace std;

int main() {
    int S, A, B, X; 
    cin >> S >> A >> B >> X;

    int cycle = A + B;
    int full = X / cycle;      
    int rem = X % cycle;       

    int run_last = min(rem, A); 

    int ans = full * (S * A) + S * run_last;

    cout << ans << endl;
}
