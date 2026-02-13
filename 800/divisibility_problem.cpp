#include<iostream>
using namespace std;

int main(){
    int t , a , b;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        cin >> a >> b;
        if(a < b) cout << b - a << '\n';
        
        else{
            int operation = (((a+b)-(a%b)) - a);
            cout << (a % b == 0 ? a%b : operation) << '\n';
        } 
    }
    return 0;
}