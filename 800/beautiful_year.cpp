#include <iostream>
#include<set>
using namespace std;

int main()
{
    int year;
    cin >> year;
    string str = to_string(year);
    
    while (1)
    {
        year++;
        str = to_string(year);
        set<char> distinct_chars(str.begin(), str.end());
        if (distinct_chars.size() == str.length())
        break;

    }

    cout << year;
    return 0;
}