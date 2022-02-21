#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    vector<int> a;
    for(int i = yellow; i>0; i--){
        if(yellow % i == 0){
            a.push_back(i+2);   //yellow 소인수분해.
        }
    }
   if(a.size()==1){
       int b = a[0];
        a.push_back(b);
        return a;
    }
    else if(a.size()==2){
        return a;
    }
    else{
        int last = a.size()-1;
        int first = 0;
        int middle = (last+first+2)/2;
        for(int j = 0; j<middle; j++){
            if(brown + yellow == a[first+j]*a[last-j]){
                answer.push_back(a[first+j]);
                answer.push_back(a[last-j]);
                return answer;
            }
        }
    }
}
