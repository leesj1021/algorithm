#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v ={0,1};
    for(int i =2;i<=n;i++){
        v.push_back((v[i-1]%1234567+v[i-2]%1234567)%1234567);
    }
    long long ll = v.back();
    answer=ll%1234567;
        
    return answer;
}