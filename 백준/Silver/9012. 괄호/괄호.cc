// BOJ_9012_괄호 
// https://www.acmicpc.net/problem/9012

/*
맨 처음 케이스개수 받기
한줄씩 받아서 한 괄호씩 검증
1. ( 일경우 count +1
2. ) 일경우 count -1 (중간에 음수되면 NO)
3. 수행 후 count 값 0 아니면 NO
*/

#include <iostream>

using namespace std;

string checkvps(string s){
    int count = 0;
    
    for (int i=0; i<s.length(); i++){
        if(s[i]=='(') count++;
        else count--;
        
        if (count<0) return "NO"; // -
    }
    if (count ==0) return "YES"; // 0
    else return "NO"; //+
}

int main(void){
    ios::sync_with_stdio(false);  //reduce time
    cin.tie(NULL);                //use gemini

    int N;
    cin >> N;

    
    for (int i=0; i<N; i++){
        string s;
        cin >> s;
        cout << checkvps(s) << "\n";
    }
}

/* study log
    한줄씩 입력받을 때 string 사용하기
    size 뿐 아니라 length() 라는 함수도 있음
    여러번 똑같은걸 검증할 땐 func를 하나 만들자.

*/