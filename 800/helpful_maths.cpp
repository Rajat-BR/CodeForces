#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string str, t;
    cin >> str;
    if(str.length() == 1){
        cout << str[0];
        return 0;
    }
    for(int i = 0 ; i < str.size() ; i+=2) t+=str[i];
    sort(t.begin(), t.end());
    for(int i = 0 ; i < t.size() - 1; i++) cout<<t[i] << "+";
    cout<<t[t.size()-1];
    return 0;

}