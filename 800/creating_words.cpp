#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    string s1, s2;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin>>s1>>s2;
        swap(s1[0], s2[0]);
        cout<<s1<<" "<<s2<<'\n';
    }
    return 0;
}