#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin >> t;
    for(int i = 0; i <= t; t++)
    {
        cin >> a >>b >> c >> d;
        if(a == b == c == d)
        {
            cout<< "YES"<<endl;
        }
        else cout<< "NO" <<endl;
    } 

    return 0;
}