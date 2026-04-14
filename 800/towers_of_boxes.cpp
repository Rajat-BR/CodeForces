#include<iostream>
using namespace std;

int main(){
    int t, n , m, d, boxes_to_tower;
    cin >> t;
    while(t--){
        cin >> n >> m >> d;
        if(m > d){
            cout << n << endl;
            continue; 
        }
        boxes_to_tower = (d / m) + 1;
        cout << (n+boxes_to_tower-1)/boxes_to_tower << endl;
    }
    return 0;
}