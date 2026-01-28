#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(int i=0;i<my_string.length();i++){
        if(48<my_string[i]&&my_string[i]<58){
            answer+=my_string[i]-'0';
        }
    }
    return answer;
}