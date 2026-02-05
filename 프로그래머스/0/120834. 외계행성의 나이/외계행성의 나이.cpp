#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(int age) {
    string answer = "";
    string age_string=to_string(age);
    int s=age_string.length();
    for(int i=0;i<s;i++){
        age_string[i]=age_string[i]+49;
    }
    return age_string;
}