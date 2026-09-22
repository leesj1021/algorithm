#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int>v;
    for(int i = 1;i<=number;i++){
        int sum = 0;
        for(int j = 1;j<=i;j++){
            if(i%j==0){
                sum++;
            }
        }
        v.push_back(sum);
    }
    for(int i = 0;i<number;i++){
        if(v[i]>limit){
            answer+=power;
        }else{
            answer+=v[i];
        }
    }
    return answer;
}