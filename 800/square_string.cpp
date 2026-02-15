#include<iostream>
using namespace std;

int main(){
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        if(((str.length() & 1)) != 0){
            cout << "NO" << endl;
            continue;
        }

        string s1(str.begin(), str.begin() + str.size() / 2);
        string s2(str.begin() + str.size() / 2, str.end());
        cout << (s1 == s2 ? "YES" : "NO") << '\n';
    }

    return 0;
}