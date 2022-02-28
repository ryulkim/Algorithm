#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int brown, int yellow) {
    int col, row;

    for (int i = 1; i <= yellow; i++) {
        if (yellow % i == 0) {
            // 각 줄에 같은 수의 노란색 카펫이 들어가는 경우(yellow의 공약수)
            col = i; // 노란색 카펫의 가로 크기
            row = yellow / i; // 노란색 카펫의 세로 크기
            if (2 * col + 2 * row + 4 == brown) break;
            // 갈색 면의 수 = 노란 면의 (가로 * 2 + 세로 * 2 + 4)
        }
    }
    vector<int> answer = { row + 2, col + 2 };
    // 갈색 격자까지 포함된 카펫의 가로, 세로 크기 -> 노란면의 가로 세로에 각각 + 2
    return answer;
}
