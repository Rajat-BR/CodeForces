#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        cin >> n;
        int bait = n / 3;
        if(n % 3 ==0) cout<< n/3 <<" "<< n/3;
        else{
            if(n%3 == 2) cout << bait << " "<< bait+1;
            if(n%3 == 1) cout << bait+1 << " "<< bait;
        } 
        cout << '\n';
    }
    return 0;
}