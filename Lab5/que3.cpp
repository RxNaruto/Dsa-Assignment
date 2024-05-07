#include <iostream>
#include <stack>
#include <cmath>
#include <string>
using namespace std;

int postfix(string s) {
    stack<int> st;
    string num;
    for (char c : s) {
        if (c == ' ') {
            if (!num.empty()) {
                st.push(stoi(num));
                num.clear();
            }
        } else if (isdigit(c)) {
            num += c;
        } else {
            if (!num.empty()) {
                st.push(stoi(num));
                num.clear();
            }
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            switch (c) {
                case '+':
                    st.push(op1 + op2);
                    break;
                case '-':
                    st.push(op1 - op2);
                    break;
                case '*':
                    st.push(op1 * op2);
                    break;
                case '/':
                    st.push(op1 / op2);
                    break;
                default:
                    cout << "Invalid operator encountered: " << c << endl;
                    return -1;
            }
        }
    }
    if (!num.empty()) {
        st.push(stoi(num));
    }
    return st.top();
}

int main() {
    cout << "The evaluated result is " << postfix("54 6+7 4-*9/35 15++") << endl;
    return 0;
}
