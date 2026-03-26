/* stack
    일단 첫번쨰 값 만큼 PUSH
    조건 1.입력받은 숫자가 n-1보다 작은경우 - stack의 top 인지?
    조건 2. 입력받은 숫자보다 큰경우 다시 push 

*/


#include <iostream>
#include <stack>
#include <vector>


using namespace std;

int main(void){
    ios::sync_with_stdio(false);  //reduce time
    cin.tie(NULL);                //use gemini

    int N;
    cin >> N;

    stack<int> st;
    vector<char> signs;
    int cnt = 1;

    for (int i=0; i<N; i++){
        int comp;
        cin >> comp;
        
        while(cnt <= comp){
            st.push(cnt);
            cnt++;
            signs.push_back('+');
        }

        if (!st.empty() && st.top() == comp){
            st.pop();
            signs.push_back('-');
        }else {
            cout << "NO" << "\n";
            return 0;
        }

    }
    for (int i=0; i<signs.size() ; i++){
        cout << signs[i] << "\n";
    }

}

