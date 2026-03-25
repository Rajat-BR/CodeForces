#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;


long long cost(int power){
    long long cost = pow(3, power+1) + (power*pow(3, power-1));
    return cost;
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        long long result = 0;
        cin >> n;
        string str = "";
        while(n){
            int last =  n % 3;
            str += char(last + '0');
            n = n / 3;
        }
        reverse(str.begin(), str.end());

        int length = str.length();
        for(char ch: str){
            int digit = ch - '0';
            result +=  digit * cost(length-1);
            length--;
        }
        cout << result << endl;
    }
    return 0;
}

