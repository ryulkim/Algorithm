#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
	sort(citations.begin(), citations.end());
	int size = citations.size(), answer = 0;
	for (int i = 0; i < size; i++) {
		if (citations[i] >= size - i) {
			answer = size - i;
			break;
		}
	}
	return answer;
}
