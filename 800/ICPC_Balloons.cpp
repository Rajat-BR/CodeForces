#include<iostream>
using namespace std;

int main(){
    int t, n, balloons = 0;
    string str;
    cin >> t;
    while(t--){
        int arr[26] = {0};
        cin >> n >> str;
        for(char &x : str){
            arr[x - 'A']++;
            (arr[x - 'A'] > 1 ? balloons++ : balloons+=2);
        }
        cout << balloons << '\n';
        balloons = 0;

    }
}
