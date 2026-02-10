#include<iostream>
using namespace std;

int main(){
    int n , steps = 0;
    cin>>n;
    if (n < 6){
        cout << "1";
        return 0;
    } 

    if(n%5==0) steps = n/5; 
    else{
        steps = (n/5); 
        steps++;
    }

    cout << steps;
    return 0;
}