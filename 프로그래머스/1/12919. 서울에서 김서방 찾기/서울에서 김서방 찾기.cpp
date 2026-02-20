#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    auto it=find(seoul.begin(),seoul.end(),"Kim");
    int i=distance(seoul.begin(),it);
    return "김서방은 "+to_string(i)+"에 있다";
}