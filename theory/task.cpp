#include <iostream>
#include <stack>
using namespace std;

void displayRec(stack<int> &st)
{ // display recursively
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    displayRec(st);
    cout << x << " ";
    st.push(x);
}
void display(stack<int> &st)
{ // display recursively
    if (st.size() == 0)
        return;
    int x = st.top();
    st.pop();
    displayRec(st);
    st.push(x);
}


int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(60); // 10 20 ...60
    st.push(90);
    st.push(80);
    st.push(60); // 10 20 ...60
                 //     displayNor(st);
                 //     cout<<endl;
                 //    // displayNor(st);
                 //     //PushAtBottom(st,67);
                 //     reverse(st);
    displayRec(st);
    cout << endl;
    display(st);

    return 0;
}