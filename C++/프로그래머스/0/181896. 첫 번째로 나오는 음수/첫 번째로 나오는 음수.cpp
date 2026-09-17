#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for(int s : num_list){
        if(s<0){
            return answer;
        }
        else{
            answer++;
        }
    }
    if(answer==num_list.size()){
        answer=-1;
    }
    return answer;
}