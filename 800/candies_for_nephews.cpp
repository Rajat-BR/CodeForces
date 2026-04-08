#include<iostream>
using namespace std;

int main(){
    int t, n, extra, per_person;
    cin >> t;
    while(t--){
        cin >> n;
        per_person = (n+2)/3;
        extra = (per_person * 3) - n;
        cout << extra <<endl;
    }

    return 0;

    /*
    best version:
    while(t--){
        cin >> t;
        cout << (3 - n%3) % 3 << endl;
    }
    */
}