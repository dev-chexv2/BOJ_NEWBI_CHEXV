// BOJ 2164번 카드2
// https://www.acmicpc.net/problem/2164

/*
deque를 활용하자!

맨처음 숫자번호 N 받고
1-N deque에 push_back 하고
N-2번 반복문
합번 POP 하고 2번쩨 POP은 바로 push_back = push_front() 형식으로
반복하고
COUT push_back()

*/

#include <iostream>
#include <deque>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);  //reduce time
    cin.tie(NULL);                //use gemini
    
    deque<int> dq;

    int N;
    cin >> N;

    for(int i=1;i<=N ; i++) dq.push_back(i); //짧게쓰고싶다..
    for(int i=0;i<=N-2 ; i++){
        
        dq.pop_front();
        int temp = dq.front();
        dq.pop_front();
        dq.push_back(temp);
    }
    cout << dq.back() << "\n";

}
    
/* study log
1. for 문도 한줄만쓸 땐 생략이 가능하다.
2. dq.push_back(dq.pop_front()) 를 해보려했으나 dq.pop 은 값을 출력해주진 않나보다.
3. 문제를 잘못 봐서 다시 고치느라 귀찮아죽는줄알았따.
*/