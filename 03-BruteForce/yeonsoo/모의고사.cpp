#include <algorithm>
#include <vector>
using namespace std;

vector<int> solution(vector<int> answers) {
    int a[5] = {1,2,3,4,5};
    int b[8] = {2,1,2,3,2,4,2,5};
    int c[10] = {3,3,1,1,2,2,4,4,5,5};
    
    int scores[3] = {0,}; // 인덱스 0,1,2에 각각 수포자 1,2,3의 점수
    
    for(int i{0}; i<answers.size(); i++){ // 문제 개수만큼 돌면서
        if(a[i % sizeof(a)] == answers[i]){ // (수포자1이 찍은 답 == 정답) 이면
            scores[0]++; // (수포자1 점수) + 1
        }
        if(b[i % sizeof(b)] == answers[i]){
            scores[1]++;
        }
        if(c[i % sizeof(c)] == answers[i]){
            scores[2]++;
        }
    }
        
    int max_score = max(scores[0],max(scores[1],scores[2])); // 가장 높은 점수를 담는 변수
    vector<int> answer;
    
    for(int i{0}; i<3; i++){ // 세 점수를 돌면서
        if(scores[i] == max_score){ // 최고점과 같은 점수일 경우
            answer.push_back(i+1); // answer 벡터에 추가
        }
    }
    return answer;
}
