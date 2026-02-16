#include<iostream>
using namespace std;

int main(){
    int arr[5][5];
    int x = 0 , y = 0, moves = 0;
    for(int rows = 0 ; rows < 5 ; rows++){
        for(int cols = 0 ; cols < 5; cols++){
            cin>>arr[rows][cols];
            if(arr[rows][cols] == 1){
                x = rows;
                y = cols;
            }
        }
    }

    moves = abs(x - 2) + abs(y - 2);
    cout << moves;
    return 0;
}