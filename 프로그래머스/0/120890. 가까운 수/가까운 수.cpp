#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0];
    int sub=abs(n-array[0]);
    for(int i : array){
        if(abs(n-i)<sub){
            sub=abs(n-i);
            answer=i;
        }
        else if(abs(n-i)==sub){
            answer=min(answer,i);
        }
    }
    return answer;
}