#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    reverse(str2.begin(), str2.end());
    cout << (str2 == str1 ? "YES" : "NO");
    return 0;

}