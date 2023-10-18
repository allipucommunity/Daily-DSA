#include <bits/stdc++.h>
using namespace std;

bool isValid(string e) {
    stack<char> st;
    int len = e.length();
    int i = 0;

    while (i < len) {
        if (e[i] == '(' || e[i] == '{' || e[i] == '[') {
            st.push(e[i]);
        } else if (e[i] == ')' || e[i] == '}' || e[i] == ']') {
            if (st.empty()) {
                return false; // No matching opening bracket on the stack
            } else {
                char top = st.top();
                if ((e[i] == ')' && top == '(') || (e[i] == '}' && top == '{') || (e[i] == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false; // Mismatched closing bracket
                }
            }
        }
        i++;
    }

    return st.empty(); // Check if all brackets are balanced
}
