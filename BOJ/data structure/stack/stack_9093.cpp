#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        stack<char> st;
        string s;
        getline(cin >> ws, s);

        string answer;

        for (char c : s) {
            if (c == ' ') {
                while (!st.empty()) {
                    answer.push_back(st.top());
                    st.pop();
                }
                answer.push_back(' ');
            } else {
                st.push(c);
            }
        }

        while (!st.empty()) {
            answer.push_back(st.top());
            st.pop();
        }

        cout << answer << '\n';
    }

    return 0;
}
