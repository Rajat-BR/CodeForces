#include<iostream>
using namespace std;

int main(){
    int t, h, m;
    cin >> t;
    while(t--){
        cin >> h >> m;
        int time = h * 60 + m;
        int ans = 1440 - time;
        cout << ans << '\n';
    }

    return 0;
}