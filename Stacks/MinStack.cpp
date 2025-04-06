#include<bits/stdc++.h>
using namespace std;
class st
{
    private:
    stack <pair<int,int>> st;
public:
    void push(int val)
    {
        if(st.empty())
        {
            st.push({val,val});
        }
        else{
            st.push({val, min(st.top().second, val)});

        }
        
    }
    int getmin()
    {
        return st.top().second;
    }
    void pop()
    {
        st.pop();
    }
    int top()
    {
        if (st.empty()) {
            cout << "Stack is empty!" << endl;
            return -1;  
        }
        else
        return st.top().first;
    }

};
int main()
{

    st stackObj;
    stackObj.push(5);
    stackObj.push(3);
    stackObj.push(7);
    stackObj.push(2);
    
    cout << "Minimum: " << stackObj.getmin() << endl;

    stackObj.pop();
    cout << "Minimum after pop: " << stackObj.getmin() << endl; 

    cout << "Top element: " << stackObj.top() << endl;
    return 0;
}
