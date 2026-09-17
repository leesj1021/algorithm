#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> honor;
    int min = score[0];
    for(int i = 0 ; i<score.size();i++){
        if(i<k){
            honor.push_back(score[i]);
            sort(honor.begin(),honor.end());
            min=honor[0];
            answer.push_back(honor[0]);
        }
        else{
            if(score[i]<=min){
                answer.push_back(honor[0]);
                continue;
            }else{
                honor.erase(honor.begin());
                honor.push_back(score[i]);
                sort(honor.begin(),honor.end());
                min=honor[0];
                answer.push_back(honor[0]);
            }
        }
    }
    return answer;
}