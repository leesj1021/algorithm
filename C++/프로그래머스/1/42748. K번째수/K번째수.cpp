#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i = 0 ;i <commands.size();i++){
        vector<int> str ;
        for(int j = commands[i][0]-1;j<=commands[i][1]-1;j++){
            str.push_back(array[j]);
        }
        sort(str.begin(),str.end());
        answer.push_back(str[commands[i][2]-1]);
    }
    return answer;
}