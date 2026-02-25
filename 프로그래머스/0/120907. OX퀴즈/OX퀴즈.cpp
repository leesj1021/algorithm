#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(int i=0;i<quiz.size();i++){
        int num=0;
        int l1=0;
        int l2=0;
        int r=0;
        char op;
        char eq;
        stringstream ss(quiz[i]);
        while(ss>>l1>>op>>l2>>eq>>r){
            if(op=='+')l1+=l2;
            else if(op=='-')l1-=l2;
            
            if (l1==r){
                answer.push_back("O");
            }
            else{
                answer.push_back("X");
            }
        }
    }
    return answer;
}