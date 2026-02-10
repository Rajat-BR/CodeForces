#include<iostream> 
#include<cctype>
using namespace std;

int main(){
    string str;
    int n;
    cin>>n;
    cin >> str;
    if(n < 26){
        cout<<"NO";
        return 0;
    }

    int arr[26] = {0};
    for(char& x : str){
        x = tolower(x);
        arr[x - 'a'] = 1;
    }
    
    for(int& i : arr){
        if(i == 0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}