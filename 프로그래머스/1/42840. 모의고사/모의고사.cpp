#include <string>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    
    vector<int> answer;
    
    int repeat = answers.size();
    array<int,5> p1 = {1,2,3,4,5};
    array<int,8> p2 = {2,1,2,3,2,4,2,5};
    array<int,10> p3 = {3,3,1,1,2,2,4,4,5,5};
    vector<int> scores = {0,0,0};
    for (int i=0; i<answers.size();i++){
        if(answers[i] == p1[i % p1.size()] ) scores[0]++;
        if(answers[i] == p2[i % p2.size()] ) scores[1]++;
        if(answers[i] == p3[i % p3.size()] ) scores[2]++;
    }
    int max_score = max({scores[0],scores[1],scores[2]});
    
    for(int i=0;i<3;i++){
        if(scores[i]==max_score) answer.push_back(i+1);
    }
    
    
    return answer;
}