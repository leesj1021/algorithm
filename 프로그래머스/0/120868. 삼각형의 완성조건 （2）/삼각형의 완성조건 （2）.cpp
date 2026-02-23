#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    //큰게 주어진 경우
    int ma=max(sides[0],sides[1]);
    int mi=min(sides[0],sides[1]);
    for(int i=ma-mi+1;i<=ma;i++){
        answer++;
    }
    //안주어진게 가장 큰 경우
    for(int j=ma+1;j<=ma+mi-1;j++){
        answer++;
    }
    return answer;
}