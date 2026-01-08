#include <iostream>
#include <string>
#include <deque>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    bool check = false;

    int index = 0;
    string answer;
    stack<char> st;
    while (index != s.size()) {

        if (s[index] == '<') {
            check = true;
            if (!st.empty()) {
                while (!st.empty()) {
                    answer.push_back(st.top());
                    st.pop();
                }
            }
        }

        if (check) {
            answer.push_back(s[index]);
            index++;
        }
        else {
            st.push(s[index]);
            index++;
        }

        if (s[index] == '>') {
            answer.push_back(s[index]);
            check = false;
            index++;
        }

        if (s[index] == ' ' && !check ) {
            while (!st.empty()) {
                answer.push_back(st.top());
                st.pop();
            }
            index++;
            answer.push_back(' ');
        }
        
        
    }

    if (!st.empty()) {
        while (!st.empty()) {
            answer.push_back(st.top());
            st.pop();
        }
    }
    cout << answer;
    
}
