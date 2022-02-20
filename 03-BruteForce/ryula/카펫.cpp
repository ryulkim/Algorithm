#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
	vector<int> answer;
	int num = brown + yellow;
	for (int i = 3; i < num; i++) {
		for (int j =3; j < num; j++) {
			if (i * j == num&&(i-2)*(j-2)==yellow) {
				if (i >= j) {
					answer.push_back(i);
					answer.push_back(j);
					return answer;
				}
			}
		}
	}
}
