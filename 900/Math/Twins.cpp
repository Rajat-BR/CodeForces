#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, sum = 0, sum2 = 0;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        sum+=arr[i];
    }

    sort(arr, arr+n);

    for(int i = n-1 ; i > -1 ; i--){
        sum2+=arr[i];
        if(sum2 > (sum/2)){
            cout << n-i;
            return 0;
        }
    }


    return 0;
}