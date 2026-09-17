#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> cnt;
    for(int i = 0;i<completion.size();i++){
        cnt[completion[i]]++;
    }
    for(int i = 0;i<participant.size();i++){
        cnt[participant[i]]--;
    }
    for(int i = 0;i<participant.size();i++){
        if(cnt[participant[i]]==-1){
            answer=participant[i];
            break;
        }
    }
    return answer;
}