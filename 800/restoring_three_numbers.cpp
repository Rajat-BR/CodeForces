#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int arr[4], sum = 0;
    for(int i = 0 ; i < 4; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int sus = sum / 3;
    sort(arr, arr+4);
    
    cout << arr[3] - arr[0]<< " " << arr[3] - arr[1]<< " " << arr[3] - arr[2];
    return 0;
    
}

