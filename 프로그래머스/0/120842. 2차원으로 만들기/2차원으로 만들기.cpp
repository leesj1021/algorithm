#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    for(int i=0;i<num_list.size();i++){
        if (i % n == 0) {         
            answer.push_back({});
        }
        answer[i/n].push_back(num_list[i]);
    }
    return answer;
}