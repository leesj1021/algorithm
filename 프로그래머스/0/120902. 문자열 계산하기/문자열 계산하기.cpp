#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    int num=0;
    
    char eq='+';
    stringstream ss(my_string);
    ss>>answer;
    while(ss>>eq>>num){
        if(eq=='+') answer+=num;
        else if(eq=='-')answer-=num;
    }
    return answer;
}