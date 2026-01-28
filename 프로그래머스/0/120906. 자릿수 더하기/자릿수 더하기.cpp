#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string s=to_string(n);
    int ss=s.length();
    for(int i=0;i<ss;i++){
        answer+=s[i]-'0';
    }
    return answer;
}