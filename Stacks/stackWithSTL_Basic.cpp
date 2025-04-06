#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> s;
    s.push(1);
    s.push(12);
    s.pop();
    s.top();
    s.push(10);
    s.push(90);
    s.push(100);

    //printing all values present in stack
     while(!s.empty()) 
     {
        cout << s.top() << endl;
        s.pop();
     }


    return 0;
}
