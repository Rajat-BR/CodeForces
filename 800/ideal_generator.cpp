#include<iostream>
using namespace std;

int main(){
    int t, k ;
    cin >> t;
    while(t--){
        cin >> k;
        cout << (k&1 ? "YES" : "NO" ) << endl;
    }
    return 0;
}