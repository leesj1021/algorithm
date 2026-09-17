#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    
    for(int i = 3;i<brown/2;i++){
        if(sum%i==0){    
            int x = i-2; //노란색을 가지는 가로
            int y = sum/i-2;//노란색을 가지는 세로
            if(brown-4==2*x+2*y&&yellow==x*y){
                if(x>y){
                    answer.push_back(x+2);
                    answer.push_back(y+2);
                }else{
                    answer.push_back(y+2);
                    answer.push_back(x+2);
                }
                return answer;
            }
            
        }
    }
    
}