#include<iostream>
using namespace std;

int main(){
    int n , x, sum = 0, arr[50];
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> x;
        for(int j = 0 ; j < x ; j++){
            cin >> arr[j];
            sum += arr[j];
        }
        cout << ((sum&1) == 0 ? "YES" : "NO") << '\n';
        sum = 0; 
    }
    return 0;
}