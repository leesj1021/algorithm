#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    for(int i = citations.size();i>0;i--){
        int sum = 0;
        for(int j = 0;j<citations.size();j++){
            if(citations[j]>=i){
                sum++;
            }
        }
        if(sum>=i){
            return i;
        }
    }
    return 0;
}