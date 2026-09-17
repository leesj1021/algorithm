#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string case1 = "";
    string case2 = "";
    case1 = to_string(a) + to_string(b);
    case2 = to_string(b) + to_string(a);
    a = stoi(case1);
    b= stoi(case2);
    if(a>=b){
        answer=a;
    }else{
        answer=b;
    }
    return answer;
}