#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n, q;
    string s, t;
    cin>>q;
    for(int i = 0 ; i < q ; i++){
        cin>>n;
        cin>>s>>t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        cout<<(s == t ? "YES" : "NO") << endl;
    }

    return 0;
}
