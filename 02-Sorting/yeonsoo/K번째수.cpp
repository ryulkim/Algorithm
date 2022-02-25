#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int size = commands.size();
    
    for(int i{0}; i<size; i++){
        vector<int> sliced_array (array.begin()+commands[i][0]-1, array.begin()+commands[i][1]); // 하나 앞까지 자름
        sort(sliced_array.begin(), sliced_array.end());
        answer.push_back(sliced_array[commands[i][2]-1]);
    }
    return answer;
}
