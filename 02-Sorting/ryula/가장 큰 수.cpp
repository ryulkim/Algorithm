#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    list<string> strings;
    for(int i=0;i<numbers.size();i++){
        strings.push_back(to_string(numbers[i]));
    }
    strings.sort(greater<string>());
    list<string>::iterator iter = strings.begin();
    for(int i=0;i<numbers.size();i++){
        advance(iter,i);
        answer+=*iter;
    }
    return answer;
}
