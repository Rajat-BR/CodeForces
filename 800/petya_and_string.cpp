#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    if(strcasecmp(s1.c_str(), s2.c_str())==0) cout <<"0";
    else if(strcasecmp(s1.c_str(), s2.c_str())>0) cout <<"1";
    else cout <<"-1";
    return 0;
}