#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> vec(N);
    stack<int> st;
    vector<int> ans(N, -1);
    for(int i = 0; i < N; i++){
        cin >> vec[i];
    }


    for(int idx = 0; idx < N; idx++){
        while (!st.empty() && vec[st.top()] < vec[idx] )
        {
            ans[st.top()] = vec[idx];
            st.pop();
        }
        st.push(idx);
    }

    for(int i = 0; i < N; i++){
        if( i != N-1){
            cout << ans[i] << ' ';
        }
        else{
            cout << ans[i];
        }
    }

    

    
    

    
}