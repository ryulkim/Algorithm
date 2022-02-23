#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());

	int num = completion.size();
	for (int i{ 0 }; i<num; i++) {
		if (participant[i] != completion[i]) {
			return participant[i];
            // 사전순으로 정렬했는데 같지 않다.
            // -> 참가자 리스트에만 있고 완주자 리스트에는 없는 것, 반환
		}
	} 
    // for문에서 return없이 빠져나옴
    // -> 맨 마지막 참가자가 완주자 리스트에 없는 것, 마지막 참가자 리턴
    return participant[participant.size()-1];
