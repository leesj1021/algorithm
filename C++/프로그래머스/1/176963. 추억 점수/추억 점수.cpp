#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for(int i = 0 ; i<photo.size();i++){
        int sum = 0;
        
            
            for(int k = 0;k<name.size();k++){
                auto it = find(photo[i].begin(),photo[i].end(),name[k]);
                if(it!=photo[i].end()){
                    sum+=yearning[k];
                }
            }
            
        
        answer.push_back(sum);
    }
    
    return answer;
}