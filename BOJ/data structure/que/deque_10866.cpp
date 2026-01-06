#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string s;
    deque<int> dq;
    while (N--) {
        cin >> s;
        int x;
        if (s == "push_back") {
            cin >> x;
            dq.push_back(x);
        }
        if (s == "push_front") {
            cin >> x;
            dq.push_front(x);
        }
        if (s == "pop_front") {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            else {
                cout << -1 << '\n';
            }
            
        }
        if (s == "pop_back") {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            else {
                cout << -1 << '\n';
            }
            
        }
        if (s == "empty") {
            if (dq.empty()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        if (s == "size") {
            cout << dq.size() << '\n';
        }
        if (s == "front") {
            if (dq.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << dq.front() << '\n';
            }
        }
        if (s == "back") {
            if (dq.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << dq.back() << '\n';
            }
        }
       
    }
}
