#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string n_str) {
    int answer = 0;
    for(int i=1;i<=n_str.size();i++){
        answer+=(n_str[i]-'0')*pow(10, n_str[n_str.size()-i]); 
    }
    return answer;
}