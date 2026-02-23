#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    int answer = 0;
    if(M==1&&N==1){
        return 0;
    }
    else{
        if(min(M,N)==1) return max(M,N)-1;
        else{
            answer+=min(M,N)-1;
            answer+=min(M,N)*(max(M,N)-1);
        }
    }
    return answer;
}