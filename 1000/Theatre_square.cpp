#include<iostream>
using namespace std;

int main(){
    int m , n , a ;
    long long num1 , num2;
    cin >> m >> n >> a;

    num1 = (m+a-1)/a;
    num2 = (n+a-1)/a;

    cout << num1 * num2;

    return 0;
}