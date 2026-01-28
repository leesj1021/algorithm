#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int s=array.size();
    sort(array.begin(),array.end());
    if(s%2==1){
        answer=array[s/2];
    }
    else{
        answer=array[s/2-1]+array[s/2];
        answer/=2;
    }
    return answer;
}