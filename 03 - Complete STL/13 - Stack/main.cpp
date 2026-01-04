#include <iostream> 
#include <bits/stdc++.h> // includes all the STL templates

using namespace std;

void PrintStack(stack <int> s){
    cout << "Stack contents (from top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop(); // Remove the top element
    }
    cout << endl;
}

int main(){

    stack <int> st;

    // insertion :
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.emplace(50);

    // Deletion :
    st.pop();

    // accessing :
    cout<<st.top()<<endl;

    // capacity :
     if (st.empty()) {
        cout << "The stack is empty." <<endl;
    }else{
        cout << "The stack is not empty." <<endl;
    }

    cout<<"The size of the Stack is : "<<st.size()<<endl;



    PrintStack(st);

     
    return 0;
}