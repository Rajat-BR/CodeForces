#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long even , odd;
    even = n / 2;
    if((n & 1) == 0) odd = n /2;
    else odd = (n / 2) + 1;
    long long ans = (even*(even+1)) - (odd*odd);
    cout << ans;
    return 0;
}

// Intended Pattern
// if n is even then ans = n / 2
// if n is odd then ans = -(n+1) / 2