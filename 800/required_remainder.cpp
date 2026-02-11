#include<iostream>
using namespace std;

int main(){
    int x, y, n, ans, t;
    cin >>t;
    for(int i = 0 ; i < t ; i++){
        cin >> x >> y >> n;
        int k = n / x;
        int tri = (k*x)+y;
        if(tri > n) ans = (((k-1)*x)+y);
        else ans = tri;
        cout << ans<< '\n';  
    }
    return 0;
}

/*
Explanation : first you get the maximum number that is divisible by x
              then check if res * x + y is greater than n or not
              if yes : then the final answer will be (res - 1) * x + y
              if no : then the final anwer will be (res) * x  + y

              Example: take 7 5 12345
              divide 12345 / 7 : ans = 1763
              check if 1763 * 7 + 5 > 12345 ?
              yes so the answer will be 1762 * 7 + 5. This is the maximum value that satisfies the 
              condition k mod x == y
*/

