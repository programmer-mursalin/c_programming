#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(20);
    st.push(19);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
}