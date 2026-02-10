#include<iostream>
using namespace std;

int main(){
    int n , p, count = 0, arr[50];
    cin >> n >> p;
    for(int i = 0 ; i < n ;i++){
        cin >> arr[i];
    } 
    int m = arr[p - 1];
    for(int i = 0 ; i < n ; i++){
       if(arr[i] != 0 && arr[i] >= m ) count++;
    } 
    return 0;
    cout << count;
}