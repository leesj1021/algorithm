#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    while(n!=1){
        for(int i=2;i<=n;i++){
            if(n%i==0){
                answer.push_back(i);
                while (n % i == 0) {
                n /= i;
            }
            }
        }
    }
    sort(answer.begin(), answer.end());              // 정렬
    answer.erase(unique(answer.begin(), answer.end()), answer.end());  // 중복 제거
    return answer;
}