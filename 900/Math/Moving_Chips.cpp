#include<iostream>
using namespace std;

int main(){
    int n, even = 0;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        if((arr[i]&1)==0) even++;
    }

    int odd = n - even;
    int cost = 0;
    if(even >= odd) cost = odd;
    else cost = even;
    cout << cost;
    return 0;
}