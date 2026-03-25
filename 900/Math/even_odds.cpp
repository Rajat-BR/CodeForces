#include<iostream>
using namespace std;

int main(){
    long long n, k, a0, odds;

    cin >> n >> k;
    
    odds = (n+1) / 2;

    //an = a0 + (index - 1) * d
    
    if(k > odds){
        a0 = 2;  //a0 starts from 2
        cout << a0 + ((k - odds - 1) * 2); 
    }
    else{
        a0 = 1;  //a0 starts from 1
        cout << a0 + ((k - 1) * 2);
    }
    return 0;
}