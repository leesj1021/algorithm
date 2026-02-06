#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    string temp="";
    for(char c:my_string){
        if(48<=c&&c<58){
            temp+=c;
        }
        else{
            if(temp=="")
                continue;
            else{
                answer+=stoi(temp);
                temp="";
            }
        }
    }
    if(temp!=""){
        answer+=stoi(temp);
    }
    return answer;
}