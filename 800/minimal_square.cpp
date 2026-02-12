#include<iostream>
using namespace std;

int main(){
    int a , b, n;
    long long area;
    cin >> n;
    while(n--){
        cin >> a >> b;
        long long max_side = max(a , b);
        long long min_side = min(a , b);

        long long side_req = max(2*min_side, max_side);

        long long area = side_req*side_req;
        
        cout << area <<'\n';  
    }
    return 0;
}