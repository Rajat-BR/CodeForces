#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    int counter = 1;
    for(int i = 1 ; i < str.size(); i++){
        if(str[i] != str[i-1]) counter = 1;
        else counter++;
        if(counter == 7){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;

}