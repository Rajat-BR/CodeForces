#include<iostream>
using namespace std;

int main(){
    int n, fr1, fr2, fr3, count = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
       cin>>fr1>>fr2>>fr3;
       if((fr1+fr2+fr3)>1) count++;
    }

    cout<<count;
    return 0;
}