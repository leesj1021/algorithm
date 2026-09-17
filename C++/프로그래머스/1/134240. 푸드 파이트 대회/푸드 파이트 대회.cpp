#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string rev_answer ="";
    
    for(int i = 1;i<food.size();i++){
        
        for(int j = 0;j<food[i]/2;j++){
            answer+=i+'0';
        }            
        
    }
    rev_answer=answer;
    reverse(rev_answer.begin(),rev_answer.end());
    
    answer=answer+'0'+rev_answer;
    return answer;
}