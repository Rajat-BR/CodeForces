#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    string str;
    cin >> str;
    unordered_set<char> set;
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(set.count(str[i])) continue;
        set.insert(str[i]);
    }
    int n = set.size();
    if((n&1)==0) cout << "CHAT WITH HER!";
    else cout <<"IGNORE HIM!";

    return 0;
}