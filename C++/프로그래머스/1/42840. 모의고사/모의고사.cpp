#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    
    
    vector<int> v1 = {1,2,3,4,5};
    vector<int>v2={2, 1, 2, 3, 2, 4, 2, 5};
    vector<int>v3={3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    
    int s1 = v1.size();
    int s2 = v2.size();
    int s3 = v3.size();
    for(int i=0;i<answers.size();i++){
        if(answers[i]==v1[i%s1]){
            a1++;
        }
        if(answers[i]==v2[i%s2]){
            a2++;
        }
        if(answers[i]==v3[i%s3]){
            a3++;
        }
        
    }
    int best=max({a1,a2,a3});
    vector<int> answer;
    if (a1 == best) answer.push_back(1);
    if (a2 == best) answer.push_back(2);
    if (a3 == best) answer.push_back(3);
    return answer;
}