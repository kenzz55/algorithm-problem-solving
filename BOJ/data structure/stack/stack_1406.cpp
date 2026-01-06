#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int M;
    cin >> s >> M;

    stack<char> leftSt, rightSt;
    for (char ch : s) leftSt.push(ch);

    while (M--) {
        char cmd;
        cin >> cmd;

        if (cmd == 'L') {
            if (!leftSt.empty()) {
                rightSt.push(leftSt.top());
                leftSt.pop();
            }
        }
        else if (cmd == 'D') {
            if (!rightSt.empty()) {
                leftSt.push(rightSt.top());
                rightSt.pop();
            }
        }
        else if (cmd == 'B') {
            if (!leftSt.empty()) leftSt.pop();
        }
        else if (cmd == 'P') {
            char x;
            cin >> x;
            leftSt.push(x);
        }
    }

    while (!leftSt.empty()) {
        rightSt.push(leftSt.top());
        leftSt.pop();
    }
    while (!rightSt.empty()) {
        cout << rightSt.top();
        rightSt.pop();
    }
    return 0;
}
