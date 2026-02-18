#include<iostream>
using namespace std;

int main(){
    int n, even = 0, x;
    cin >> n;
    int total = n;
    while(n--){
        cin >> x;
        if((x&1)==0) even++;
    }

    int odd = total - even;
    cout << min(even, odd);

    return 0;
}