#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int amount_to_borrow = k * ((w*(w+1))/2) - n;
    cout << max(0, amount_to_borrow);
    return 0;
}
