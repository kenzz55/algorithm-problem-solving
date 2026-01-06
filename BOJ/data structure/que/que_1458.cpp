#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

   

    vector<int> answer;
    while (!q.empty()) {
        for (int i = 0; i < K - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        answer.push_back(q.front());
        q.pop();
    }

    cout << '<';
    for (int x = 0; x < N; x++) {
        if (x == N - 1) {
            cout << answer[x];
        }
        else {
            cout << answer[x] << ", ";
        }
    }
    cout << '>';
}
