#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    int ss=absolutes.size();
    for(int i=0;i<ss;i++){
        if(signs[i]==false){
            answer=answer-absolutes[i];
        }
        else{
            answer=answer+absolutes[i];
        }
    }
    return answer;
}