#include<iostream>
using namespace std;

int main(){
    long t , a , b;
    cin >> t;
    while(t--){
        cin >> a >> b;

        int ans = (abs(a - b)+9)/10;

        cout << ans <<'\n';
    }
    return 0;
}