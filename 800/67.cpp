#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t, mx = -67 , sum = 0 , x;
    cin >> t;
    while(t--){
        for(int i = 0 ; i < 7; i++){
            cin >> x;
            sum += x;
            mx = max(x , mx);
        }

        cout << mx - (sum - mx) << endl;
        sum = 0;
        mx = -67;
    }
    return 0;
}