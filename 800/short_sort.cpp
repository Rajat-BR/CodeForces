#include<iostream>
using namespace std;

int main(){
    string str;
    int t;
    cin >> t;
    while(t--){
        cin >> str;
        cout << ((str == "cab" || str == "bca") ? "NO" : "YES") << '\n';
    }

    return 0;
}