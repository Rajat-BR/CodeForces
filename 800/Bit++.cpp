#include<iostream>
using namespace std;

int main(){
    int final = 0, n;
    string input;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin>>input;
        if(input == "++X" || input == "X++") final++;
        if(input == "--X" || input == "X--") final--;
    }

    cout<<final;
    return 0;

}