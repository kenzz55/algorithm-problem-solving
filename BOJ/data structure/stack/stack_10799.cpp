#include <iostream>
#include <string>
#include <deque>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    stack<char> st;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
            ans++;
        }

        else {
            st.pop();
            if (s[i - 1] == '(') {
                ans--;
                ans += st.size();
            }
        }
    }
    
    cout << ans;
}
