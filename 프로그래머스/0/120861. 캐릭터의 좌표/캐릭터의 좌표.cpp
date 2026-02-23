#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2,0);
    int max1d=board[0]/2;
    int max2d=board[1]/2;
    for(int i=0;i<keyinput.size();i++){
        if(keyinput[i]=="left"){
            if(answer[0]!=(-max1d)) answer[0]--;
            
        }
        else if(keyinput[i]=="right"){
            if(answer[0]!=max1d) answer[0]++;
        }
        else if(keyinput[i]=="up"){
            if(answer[1]!=max2d) answer[1]++;
        }
        else{
            if(answer[1]!=(-max2d))
            answer[1]--;
            
        }
    }
    return answer;
}