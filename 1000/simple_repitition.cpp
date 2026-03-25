#include<iostream>
#include<cmath>
using namespace std;


bool isPrime(long long n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;

    for(long long i = 5; i*i <= n; i += 6){
        if(n % i == 0 || n % (i+2) == 0)
            return false;
    }
    return true;
}

int main(){
    int t, x, k;
    long long y;
    cin >> t;
    while(t--){
        y = 0;
        cin >> x >> k;
        int digits = floor(log10(x)+1);
        while(k--){
            y = y * pow(10, digits) + x;
        }
        cout << (isPrime(y)? "YES" : "NO") << endl;
    }
    return 0;

}