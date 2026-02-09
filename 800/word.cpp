#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

int main(){
    int count = 0;
    string str;
    cin >> str;
    for(char x : str){
       if(isupper(x)) count++;
    }

    if(count > (str.size()/2)) transform(str.begin(), str.end(), str.begin(), ::toupper);
    else transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str;
    return 0;
}